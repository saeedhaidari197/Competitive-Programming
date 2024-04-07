#include <iostream>
using namespace std;

main(){
	int n , k;
	cin>> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int count = 1;
	int sum = 0;
	int j =1;
	for(int i=0; i<n; i++){
		sum = sum + (arr[i] * j);
		if(count == k){
			count = 1;
			j++;
		}
		else count++;
	}
	cout<<sum;
	
}