#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s ; cin>>s;
		char c; cin>>c;
		bool possible = false;
		for(int i=0; i<s.size(); i++){
			if(s[i] == c){
				if(i%2 == 0){
					possible = true;
					break;
				}
			}
		}
		cout<<(possible ? "YES\n" : "NO\n");	
	}
}