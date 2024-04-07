#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int sum = 0;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum == 0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			if(sum > 0) sort(arr,arr+n, greater<int>());
			else sort(arr,arr+n);
			for(int i=0; i<n; i++) cout<<arr[i]<<" ";
			cout<<"\n";
		}
	}
}