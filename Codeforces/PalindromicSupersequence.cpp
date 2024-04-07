#include<bits/stdc++.h>
using namespace std;

main(){
	string s; cin>>s;
	if(s.size() <= 20000){
		string::reverse_iterator it;
		cout<<s;
		for(it=s.rbegin(); it!=s.rend(); it++) cout << *it; 
		cout<<"\n";
	}
	else{
			int mid = s.size()/2;
			int back = s.size()-1;
			for(int i=0; i<s.size()/2; i++){
				if(s[i] != s[back]){
					s.insert(s.begin()+i, s[back]);
				}
				else back--;
			}
			cout<<s<<"\n";
	}
}