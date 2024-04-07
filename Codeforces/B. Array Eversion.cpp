#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		int max = 0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] > max) max = arr[i];
		}
		int x = 0;
		int res = 0;
		for(int i=n-1; i>=0; i--){
			if(arr[i] == max) break;
			if(arr[i] > x){
				res++;
				x = arr[i];
			}
		}
		cout<<res<<"\n";
	}
}