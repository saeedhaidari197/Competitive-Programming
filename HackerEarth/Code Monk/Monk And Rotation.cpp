#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int k; cin>>k;
		vector <int> arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		if(k > n){
			k = k % n;
		}
		int position = n - k;
		if(k == 0){
			for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
			}
		}
		else{
			for(int i=position; i<n; i++){
			cout<<arr[i]<<" ";
			}
			for(int i=0; i<position; i++){
				cout<<arr[i]<<" ";
			}
		}
		cout<<"\n";
	}
}