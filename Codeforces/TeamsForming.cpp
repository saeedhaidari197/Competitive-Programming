#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int n; cin>> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int res = 0;
	for(int i=0; i<n; i++){
		res = res + (abs(arr[i] - arr[i+1]));
		i++;
	}
	cout<<res<<"\n";
}