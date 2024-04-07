#include <bits/stdc++.h>
using namespace std;

main(){
	string s;
	cin>>s;
	bool done = false;
	for(int i=0; i<s.size()-1; i++){
		int count = 1;
		for(int j=i+1; j<s.size(); j++){
			if(s[i] == s[j]) count++;
			else break;
		}
		if(count >= 7){
			cout<<"YES"<<"\n";
			done = true;
			break;
		}
	}
	if(!done) cout<<"NO"<<"\n";
}