#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b , c , d, k;
		cin >> a >> b >> c >> d >>k;
		int pens = a/c + (a%c != 0);
		int pencils = b/d + (b%d != 0);
		if(pens + pencils > k) cout<<"-1\n";
		else cout<<pens<<" "<<pencils<<"\n";
	}
}