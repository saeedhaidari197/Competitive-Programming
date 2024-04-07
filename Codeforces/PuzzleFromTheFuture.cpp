#include <iostream>
#include <string>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		cin>>s;
		int a[n] = {0};
		for(int i=0; i<n; i++){
			a[i] = (a[i]*10) + (s[i] - 48);
		}
		int b[n];
		b[0] = 1;
		for(int i=1; i<n; i++){
			if(a[i] == 1){
				if(b[i-1] == 1 && a[i-1] == 1) b[i] = 0;
				else if((a[i-1] == 1 && b[i-1] == 0) || (a[i-1] == 0 && b[i-1] == 1) ) b[i] = 1;
				else if(a[i-1] == 0 && b[i-1] == 0) b[i] = 1;
			}
			else{
				if(b[i-1] == 1 && a[i-1] == 1) b[i] = 1;
				else if((a[i-1] == 1 && b[i-1] == 0) || (a[i-1] == 0 && b[i-1] == 1) ) b[i] = 0;
				else if(a[i-1] == 0 && b[i-1] == 0) b[i] = 1;
			}
		}
		for(int i=0; i<n; i++){
			cout<<b[i];
		}
		cout<<"\n";
	}
}