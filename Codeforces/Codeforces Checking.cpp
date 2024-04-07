#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin>>test;
	while(test--){
		char s; cin>>s;
		string res = "codeforces";
		if(res.find(s) != string::npos) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}