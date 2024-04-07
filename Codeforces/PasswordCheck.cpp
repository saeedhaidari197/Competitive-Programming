#include <bits/stdc++.h>
using namespace std;

main(){
	string s; cin>>s;
	if(s.size() < 5) cout<<"Too weak"<<"\n";
	else{
		bool digit = false , lar = false, small = false;
		for(int i=0; i<s.size(); i++){
			if(!digit){
				if(s[i] >= '0' && s[i] <= '9') digit = true;
			}
			if(!small){
				if(s[i] >= 'a' && s[i] <= 'z') small = true;
			}
			if(!lar){
				if(s[i] >= 'A' && s[i] <= 'Z') lar = true;
			}
		}
		if(digit && lar && small) cout<<"Correct"<<"\n";
		else cout<<"Too weak"<<"\n";
	}
}