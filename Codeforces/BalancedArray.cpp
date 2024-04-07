#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int h = n/2;
		if(h%2 == 1) cout<<"NO"<<"\n";
		else{
			cout<<"YES"<<"\n";
			int a[h];
			int b[h];
			int ac = 2;
			int bc = 1;
			for(int i=0; i<h; i++){
				cout<<ac<<" ";
				ac += 2;
			}
			for(int i=0; i<h-1; i++){
				cout<<bc<<" ";
				bc += 2;
			}
			cout<<bc+h<<"\n";
		}
	}
}