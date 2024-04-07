#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long l = (n-1) * (-1);
		long long r = n;
		cout<<l<<" "<<r<<"\n";
	}
}