#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		int count = 0;
		for(int i=n-1; i>=0; i--){
			if(s[i] == ')') count++;
			else break;
		}
		if(n-count < count) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}