#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , l , r , k;
		cin>> n >> l >> r >> k;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		sort(arr, arr+n);
		int res = 0;
		for(int i=0; i<n; i++){
			if(arr[i] < l) continue;
			if(arr[i] > r) break;
			if(arr[i] <= k){
				res++;
				k -= arr[i];
			}
			else break;
		}
		cout<<res<<"\n";
	}
}