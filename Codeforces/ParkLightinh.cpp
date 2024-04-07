#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , m;
		cin>> n >> m;
		int sum = n*m;
		if(sum%2 == 1){
			sum++;
			cout<<sum/2<<"\n";
		}
		else cout<<sum/2<<"\n";
		
	}
}