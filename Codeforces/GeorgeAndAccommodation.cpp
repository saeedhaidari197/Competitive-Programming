#include <iostream>
using namespace std;

main(){
	int rooms;
	cin >> rooms;
	int arr[2];
	int free = 0;
	while (rooms--){
		cin >> arr[0] >> arr[1];
		if((arr[0] +2) <= arr[1]) free++;
	}
	cout<<free;
}