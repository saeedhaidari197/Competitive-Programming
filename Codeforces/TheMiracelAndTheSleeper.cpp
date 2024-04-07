#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int l , r;
		cin>> l >> r;
		if (r < l * 2) cout << r - l <<"\n";
    	else cout << (r - 1) / 2 <<"\n";
    }
}