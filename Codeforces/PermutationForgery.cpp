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
		for(int i=n-1; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}