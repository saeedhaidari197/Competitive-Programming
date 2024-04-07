#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		if(n == 1) cout<<0<<"\n";
		else{
			long long i = 2;
			while(i*2 <= n ){
				i *= 2;
			}
			cout<<i-1<<"\n";
		}
	}
}