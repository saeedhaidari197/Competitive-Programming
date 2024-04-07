#include <iostream>
using namespace std;

main(){
	int n ;
	cin>> n;
	int arr[n];
	int max = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		cin>> arr[i];
		if(arr[i] > max) max = arr[i];
	}
	for(int i=0; i<n; i++){
		count = count + (max - arr[i]);
	}
	cout<<count;
}