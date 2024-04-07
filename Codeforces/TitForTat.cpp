#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		int i=0;
		while(k > 0 && i < n-1){
			arr[n-1] = arr[n-1] +1;
			while(arr[i] <= 0){
				i++;
			}
			arr[i]--;
			k--;
		}
		for(int i=0; i<n; i++) cout<<arr[i]<<" ";
		cout<<"\n";
	}
}