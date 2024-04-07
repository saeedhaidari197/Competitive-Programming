#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int min = 1000000000;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if( i == j) continue;
				int res = (arr[i] & arr[j]) ^ (arr[i] | arr[j]);
				if(res < min ) min = res;
			}
		}
		cout<<min<<"\n";
	}
}