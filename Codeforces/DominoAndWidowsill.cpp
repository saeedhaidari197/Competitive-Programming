#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, k1, k2, w , b;
		cin>> n >> k1 >> k2 >> w >> b;
		n = n*2;
		if( b+w > n) cout<<"NO"<<"\n";
		else{
			int white = (k1+k2)/ 2;
			int black = abs((k1+k2) - n) / 2;
			if(black >= b && white>= w) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
}