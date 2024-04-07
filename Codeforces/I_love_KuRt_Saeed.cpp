#include <iostream>
using namespace std;

main(){
	int num;
	cin >> num;
	int count = 0;
	int arr[num];
	cin>>arr[0];
	int max = arr[0];
	int min = arr[0];
	for(int i=1; i<num; i++){
		cin>>arr[i];
		if(arr[i] > max){
			max = arr[i];
			count++;
		}
		if(arr[i] < min){
			min = arr[i];
			count++;
		}
	}
	cout<<count;
}