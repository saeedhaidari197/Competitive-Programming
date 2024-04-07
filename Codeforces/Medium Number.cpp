#include <bits/stdc++.h>
using namespace std;

int main(){
	int test; cin>>test;
	while(test--){
		int a , b , c;
		cin>> a >> b >> c;
		int res = min(max(a,b),max(min(a,b), c));
		cout<<res<<"\n";
	}
	
	return 0;
}