#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n==2) cout<<2<<"\n";
		else if(n%2 == 0) cout<<0<<"\n";
		else cout<<1<<"\n";
	}
}