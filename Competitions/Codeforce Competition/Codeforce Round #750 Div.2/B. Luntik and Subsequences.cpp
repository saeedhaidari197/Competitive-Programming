#include<bits/stdc++.h>
using namespace std;

main(){
	long long test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long one = 0 , zero = 1;
		for(int i=0; i<n; i++){
			long long num; cin>>num;
			if(num == 1) one++;
			else if(num == 0) zero *= 2;
		}
		cout<<one*zero<<"\n";
	}
}