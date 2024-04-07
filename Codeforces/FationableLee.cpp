#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n;
		cin>>n;
		if(n%4 == 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}