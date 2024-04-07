#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , x , a , b;
		cin>> n >> x >> a >> b;
		int mx = max(a,b);
		int mn = min(a,b);
		while(x--){
			if(mn > 1) mn--;
			else if(mx < n) mx++;
			else break;
		}
		cout<<mx-mn<<"\n";
	}
}