#include <iostream>
using namespace std;

main(){
	int test; cin>> test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		int index;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		if(arr[0] != arr[1]) index = 1;
		if(arr[n-1] != arr[n-2]) index = n;
		for(int i=1; i<n-1; i++){
			if(arr[i] != arr[i+1] && arr[i] != arr[i-1]) index = i+1;
		}
		cout<<index<<"\n";
	}
}