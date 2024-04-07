#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	cin>>arr[0];
	int max = 0;
	int count = 1;
	for(int i=1; i<n; i++){
		cin>>arr[i];
		if(arr[i] >= arr[i-1]) count++;
		else{
			if(count > max) max = count;
			count = 1;
		}
	}
	if(count > max) max = count;
	cout<<max<<"\n";
}