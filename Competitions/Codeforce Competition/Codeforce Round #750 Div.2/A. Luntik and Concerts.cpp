#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a , b , c;
		cin>>a >> b >> c;
		long long d = a+c;
		if(d%2) cout<<"1\n";
		else cout<<"0\n";
	}
}