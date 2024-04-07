#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		
		string res;
		if(n%2==1 && n>=3) res += '7' , n -= 3;
		while(n>1){
			res += '1';
			n -= 2;
		}
		cout<<res<<"\n";
	}
}