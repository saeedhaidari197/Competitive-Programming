#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	int q; cin>>q;
	int one = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == 1) one++;
	}
	while(q--){
		int t, x;
		cin>>t >> x;
		if(t == 1){
			if(arr[x-1] == 1) one--;
			else one++;
			arr[x-1] = 1 - arr[x-1];
		}
		else{
			if(x <= one) cout<<1<<"\n";
			else cout<<0<<"\n";
		}
	}
}