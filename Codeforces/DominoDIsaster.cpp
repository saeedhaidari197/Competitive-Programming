#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		string res;
		for(int i=0; i<n; i++){
			if(s[i] == 'L') res.push_back('L');
			else if(s[i] == 'R') res.push_back('R');
			else if(s[i] == 'U') res.push_back('D');
			else if(s[i] == 'D') res.push_back('U');
		}
		cout<<res<<"\n";
	}
}