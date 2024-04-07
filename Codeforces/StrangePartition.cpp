#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long x; cin>>x;
		long long sum = 0;
		long long max = 0;
		for(int i=0; i<n; i++){
			long long num; cin>>num;
			sum += num;
			long long d = num/x;
			if(num%x > 0) max += d+1;
			else max += d;
		}
		long long min = sum/x;
		if(sum%x > 0) min++;s
		cout<<min<<" "<<max<<"\n";
	}
}