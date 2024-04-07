#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int k; cin>>k;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		sort(arr, arr+n , greater<int>());
		long long res = 0;
		for(int i=0; i<=k; i++){
			res += arr[i];
		}
		cout<<res<<"\n";
	}
}