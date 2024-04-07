#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n, h;
		cin>>n >> h;
		long long arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		sort(arr, arr+n);
		int total = arr[n-1] + arr[n-2];
		int count = h/total;
		count *= 2;
		if(h%total > arr[n-1]) count = count+2;
		else if(h%total != 0) count++;
		cout<<count<<"\n";
	}
}