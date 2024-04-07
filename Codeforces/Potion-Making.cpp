#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int e = n;
		int w = 100-n;
		int min = __gcd(w,e);
		e /= min;
		w /= min;
		cout<<e+w<<"\n";
	}
}