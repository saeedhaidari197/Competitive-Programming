#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		cin>>s;
		for(int i=0; i<n; i++){
			cout<<s[n-1];
		}
		cout<<"\n";
	}
}