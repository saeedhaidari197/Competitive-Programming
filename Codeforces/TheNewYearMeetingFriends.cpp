#include <iostream>
using namespace std;

main(){
	int arr[3];
	cin>> arr[0] >> arr[1] >> arr[2];
	for(int i=0; i<2; i++){
		for(int e=i+1; e<3; e++ ){
			if(arr[i] > arr[e]){
				int temp = arr[i];
				arr[i] = arr[e];
				arr[e] = temp;
			}
		}
	}
	int amount = arr[1]	 - arr[0];
	amount = amount + (arr[2] - arr[1]);
	cout<<amount;
}