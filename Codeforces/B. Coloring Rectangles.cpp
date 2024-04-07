#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , m;
		cin>> n >> m;
		n = n*m;
		cout<<n/3 + (n%3 != 0)<<"\n";
	}
}