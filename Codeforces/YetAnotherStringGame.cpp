#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'a') s[i] = 'b';
			else s[i] = 'a';
			i++;
			if(i == s.size()) break;
			else{
				if(s[i] == 'z') s[i] = 'y';
				else s[i] = 'z';
			}
		}
		cout<<s<<"\n";
	}
} 