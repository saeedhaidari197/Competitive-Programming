#include <iostream>
using namespace std;

main(){
	int n , k , x;
	cin>> n >> k >> x;
	int arr[n];
	for(int i=0; i<n; i++)	cin>>arr[i];
	int time = 0;
	for(int i=0; i<n-k; i++){
		time += arr[i];
	}
	for(int i=n-k; i<n; i++){
		if(arr[i] < x) time += arr[i];
		else time += x;
	}
	cout<<time<<"\n";
}