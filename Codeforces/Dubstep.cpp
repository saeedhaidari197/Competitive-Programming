#include <bits/stdc++.h>
using namespace std;

main(){
	string s;
	cin>>s;
	bool done = false;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			i+=2;
			if(done){
				cout<<" ";
				done = false;
			}
		}
		else{
			cout<<s[i];
			done = true;
		}
	}
	
}