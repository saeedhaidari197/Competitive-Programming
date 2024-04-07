#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	int sum = 0;
	int min = arr[0] , max = arr[n-1];
	for(int i=1; i<n-1; i++){
		if(arr[i] < max && arr[i] > min) sum++;
	}
	cout<<sum<<"\n";
}