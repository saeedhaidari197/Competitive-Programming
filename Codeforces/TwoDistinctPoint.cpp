#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int l1,r1,l2,r2;
		cin>> l1 >> r1 >> l2 >> r2;
		if(l1 >= r2) cout << l1 << " " << l2 << "\n";
		else cout << l1 << " "<< r2 << "\n";
	}
}