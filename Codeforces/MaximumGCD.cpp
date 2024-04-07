#include <iostream>
using namespace std;

main(){
	int test; cin>> test;
	while(test--){
		int n; cin>>n;
		if(n%2==0) cout<<n/2<<"\n";
		else cout<<(n-1)/2<<"\n";	
	}
}