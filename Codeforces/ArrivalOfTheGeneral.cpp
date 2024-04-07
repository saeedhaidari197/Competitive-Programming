#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int arr[n];
	int moves = 0;
	int max = 0, min = 100;
	int posmax = 0, posmin =0;
	bool sub;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] > max){
			max = arr[i];
			posmax = i;
		}
		if(arr[i] <= min){
			min = arr[i];
			posmin = i;
		}
	}
	int loopmax = posmax, loopmin = posmin;
	while(loopmax != 0){
		loopmax--;
		moves++;
	}
	while(loopmin != n-1){
		loopmin++;
		moves++;
	}
	if(posmax > posmin){
		cout<<moves-1;
	}
	else cout<<moves;
}