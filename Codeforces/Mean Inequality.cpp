#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[2*n];
		for(int i=0; i<n*2; i++) cin>>arr[i];
		sort(arr, arr+2*n);
		for(int i=0; i<n; i++) cout<<arr[i]<<" "<<arr[i+n]<<" ";
		cout<<"\n";
	}
}