#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long sum;
		if(n%2 == 0){
			long long half = n/2;
			sum = n + (n*half - half);
		}
		else{
			long long half = (n-1)/2;
			sum = n + (n* half);
		}
		long long square = 1;
		long long minus = 1;
		while(square*2 <= n){
			square *=2 ;
			minus += (square);
		}
		cout<<sum - (minus*2)<<"\n";
	}
}	