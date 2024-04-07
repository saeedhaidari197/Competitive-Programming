#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a , b , c;
		cin>> a >> b >> c;
		if(a > b && a > c) cout<<"0 "; else cout<<abs(a - max(b , c)) + 1<<" ";
		if(b > a && b > c) cout<<"0 "; else cout<<abs(b - max(a , c)) + 1<<" ";
		if(c > a && c > b) cout<<"0\n"; else cout<<abs(c - max(a , b)) + 1<<"\n"; 
	}
}