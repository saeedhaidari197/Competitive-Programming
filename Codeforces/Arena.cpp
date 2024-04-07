#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		int min = 100;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] < min) min = arr[i];
		}
		int count = 0;
		for(int i=0; i<n; i++){
			if(arr[i] > min) count++;
		}
		cout<<count<<"\n";
	}
}