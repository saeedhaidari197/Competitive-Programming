#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long num; cin>>num;
		int ans = 0;
		for(int i=1; i<=9; i++){
			long long k = i;
			while(k <= num){
				ans++;
				k = k * 10 + i;
			}
		}
		cout<<ans<<"\n";	
	}
}