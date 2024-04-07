#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b , c, d;
		cin>> a >> b >> c >>d;
		if(min(a,b) > max(c,d) || min(c,d) > max(a,b)) cout<<"NO\n";
		else cout<<"YES\n";
	}
}