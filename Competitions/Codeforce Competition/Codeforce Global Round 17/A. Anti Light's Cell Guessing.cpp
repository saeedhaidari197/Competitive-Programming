#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n, m;
		cin>> n >> m;
		if(n == 1 && m == 1) cout<<"0\n";
		else if(n==1 || m == 1) cout<<"1\n";
		else cout<<2<<"\n";
	}
}