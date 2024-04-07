#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , t , s;
		cin>> n >> t >> s;
		
		cout<<max(n-t, n-s) + 1 <<"\n";
	}
}