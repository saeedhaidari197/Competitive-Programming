#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i]%2 == 1) cout<<arr[i]<<" ";
		else cout<<arr[i]-1<<" ";
	}
}