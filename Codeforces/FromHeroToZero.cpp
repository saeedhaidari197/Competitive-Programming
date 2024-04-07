#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n, k;
		cin>> n >> k;
		long long count =0;
		while(n > 0){
			if(n % k == 0){
				n = n/k;
				count++;
			}
			else{
				long long num = n%k;
				n -= num;
				count += num;
			}
		}
		cout<<count<<"\n";
	}
}