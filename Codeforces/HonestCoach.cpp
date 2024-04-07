#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int size ; cin>> size;
		int arr[size];
		for(int i=0; i<size; i++){
			cin>>arr[i];
		}
		sort(arr, arr + size);
		int min = 1000;
		for(int i=0; i<size-1; i++){
			for(int j=i+1; j<size; j++){
				if(arr[j] - arr[i] < min) min = arr[j] - arr[i];
			}
		}
		cout<<min<<"\n";
	}
}