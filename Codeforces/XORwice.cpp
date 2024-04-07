#include <iostream>
using namespace std;

main(){
	int test;cin>>test;
	while(test--){
		int n , m;
		cin>> n >> m;
		unsigned int x = n&m;
		cout<<((n^x) + (m^x))<<"\n";
	}
}