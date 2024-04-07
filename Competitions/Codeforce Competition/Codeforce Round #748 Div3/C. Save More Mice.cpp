#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		int k; cin>>k;
		int arr[k];
		for(int i=0; i<k; i++) cin>>arr[i];
		sort(arr, arr+k);
		int cat = 0;
		int count = 0;
		
		for(int i=k-1; i>=0; i--){
			if(cat >= arr[i]) break;
			int dis = n - arr[i];
			cat += dis;
			count++;
		}
		cout<<count<<"\n";
	}
}