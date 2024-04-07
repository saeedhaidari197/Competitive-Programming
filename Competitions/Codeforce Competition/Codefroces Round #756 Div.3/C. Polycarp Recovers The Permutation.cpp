#include<bits/stdc++.h>
using namespace std;

main(){
	deque<int> res;
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)cin>>arr[i];
		if(arr[0] != n && arr[n-1] != n) cout<<"-1\n";
		else{
			reverse(arr, arr+n);
			for(int i=0; i<n; i++) cout<<arr[i]<<" ";
			cout<<"\n";
		}
	}
}