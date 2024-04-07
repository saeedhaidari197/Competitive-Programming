#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		int n , k;
		cin>>n >> k;
		long long sum = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			sum += num;
		}
		if(sum > k) cout<<k<<"\n";
		else cout<<sum<<"\n";
	}
}