#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n, k;
		cin>>n >> k;
		n--;
		long long i = 1;
		long long count = 0;
		while(n > 0){
			if( i < k) n -= i;
			else{
				long long cnt = n/k + (n%k != 0);
				count += cnt;
				break;
			}
			i *= 2;
			count++;
		}
		cout<<count<<"\n";
	}
}