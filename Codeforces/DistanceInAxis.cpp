#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , k;
		cin>>n >> k;
		if(n<=k) cout<<k-n<<"\n";
		else{
			int res = (n%2)^(k%2);
			cout<<res<<"\n";
		}
	}
}