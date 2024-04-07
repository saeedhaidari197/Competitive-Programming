#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		int n; cin>>n;
		long long arr[n+1];
		int k = 0;
		long long res = 0;
		for(int i=1; i<=n; i++){
			cin>>arr[i];
			if(arr[i] > i+k){
				res += arr[i] - (i+k);
				k += arr[i] - (i+k);
			}
		}
		cout<<res<<"\n";
	}
}