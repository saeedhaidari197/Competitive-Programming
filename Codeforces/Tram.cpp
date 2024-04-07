#include <iostream>
using namespace std;
 
main(){
	int stops;
	int capacity = 0;
	int min = 0;
	int arr[2];
	cin>> stops;
	while(stops--){
		cin>> arr[0] >> arr[1];
		capacity = (capacity - arr[0] + arr[1]);
		if(min < capacity) min = capacity;	
	}
	cout<<min;
}
