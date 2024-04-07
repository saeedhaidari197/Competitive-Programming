#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int a = 0, b = 0,c = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'A') a++;
			else if(s[i] == 'B') b++;
			else c++;
		}
		if((a+c) == b) cout<<"YES\n";
		else cout<<"NO\n";
	}
}