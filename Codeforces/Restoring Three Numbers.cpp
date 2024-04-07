#include <iostream>
using namespace std;

main(){
	int arr[4];
	int largest = 0;
	for(int i=0; i<4; i++){
		cin>>arr[i];
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	for(int i=0; i<4; i++){
		int sum = largest - arr[i];
		if(sum != 0) cout<<sum<<" ";
	}
	
}