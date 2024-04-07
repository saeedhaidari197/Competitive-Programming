#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b , c;
		cin >> a >> b >> c;
		int mn = min(a,b);
		int mx = max(a,b);
		if(abs(1 - (mn + mx - 1) / mn) <= c) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}