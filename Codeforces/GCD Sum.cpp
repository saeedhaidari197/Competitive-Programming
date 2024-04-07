#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long gcd = 1;
		while(gcd == 1){
			long long sum = 0;
			long long num = n;
			while(num > 0){
				sum += (num%10);
				num /= 10;
			}
			gcd = __gcd(n,sum);
			n++;
		}
		cout<<n-1<<"\n";
	}
}