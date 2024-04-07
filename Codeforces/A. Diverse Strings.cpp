#include<bits/stdc++.h>
using  namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		sort(s.begin(), s.end());
		char c = s[0];
		bool possible = true;
		for(int i=0; i<s.size(); i++){
			if(s[i] != c){
				possible = false; 
				break;
			}
			c++;
		}
		cout<<(possible ? "YES\n" : "NO\n");
	}
}