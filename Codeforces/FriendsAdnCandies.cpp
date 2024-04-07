#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		long long sum = 0;
		long long arr[n];
		for(int i=0; i<n; i++) cin>>arr[i] , sum += arr[i];
		if(sum%n == 0){
			int candies = sum / n;
			int count = 0;
			for(int i=0; i<n; i++){
				if(arr[i] > candies) count++;
			}
			cout<<count<<"\n";
		}
		else cout<<"-1\n";
	}
}