#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, m;
		cin>> n >> m ;
		if(n%m == 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";	
	}
}