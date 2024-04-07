#include<bits/stdc++.h>
using  namespace std;

bool checker(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i] == ')' && s[i-1] == '('){
			s.erase(s.begin()+i);
			s.erase(s.begin()+ (i-1));
			i = i-2;
		}
	}
	if(s.size() == 0) return true;
	else return false;
}
main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		if(s.front() == s.back()) cout<<"NO\n";
		else{
			char start = s.front();
			char end = s.back();
			string s1, s2;
			for(int i=0; i<s.size(); i++){
				if(s[i] == start){
					s1.push_back('(');
					s2.push_back('(');
				}
				else if(s[i] == end){
					s1.push_back(')');
					s2.push_back(')');
				}
				else{
					s1.push_back('(');
					s2.push_back(')');
				}
			}
			if(checker(s1) || checker(s2)) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}