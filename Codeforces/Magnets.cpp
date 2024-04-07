#include <iostream>
using namespace std;

main(){
	int num;
	cin>>num;
	int group = 0;
	int arr[num];
	cin>>arr[0];
	for(int i=1; i<num; i++){
		cin>>arr[i];
		if(arr[i] != arr[i-1]) group++;
	}
	cout<<group+1;
	
}