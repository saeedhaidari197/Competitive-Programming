#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n , k;
		cin>> n >> k;
		long long x = k/2;
		long long total = n / k;
		total *= k;
		total += min(n-total , x);
		cout<<total<<"\n";
		
	}
}