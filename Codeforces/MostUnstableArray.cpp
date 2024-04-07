#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n,m;
		cin >> n >> m;
		if(n == 1) cout<<0<<"\n";
		else if(n==2) cout<<m<<"\n";
		else cout<<m*2<<"\n";
	}
}