#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	cout<<arr[n/2 - (n%2==0)]<<"\n";
}