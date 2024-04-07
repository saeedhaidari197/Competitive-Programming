#include<bits/stdc++.h>
using namespace std;

int pos(char s, string str){
	for(int i=0; i<str.size(); i++){
		if(str[i] == s){
			return i+1;
		}
	}
}
main(){
	int test; cin>>test; 
	while(test--){
		string key; cin>>key;
		string word; cin>>word;
		int res = 0;
		for(int i=0; i<word.size()-1; i++){
			res += abs(pos(word[i], key ) - pos(word[i+1], key));
		}
		cout<<res<<"\n";
	}
}