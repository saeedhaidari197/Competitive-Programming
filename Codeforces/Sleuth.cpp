#include<bits/stdc++.h>
using namespace std;

main(){
	string s; 
	getline(cin,s);
	for(int i=s.size() -1 ; i>=0; i--){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'
				|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
					cout<<"YES\n";
				}
			else{
				cout<<"NO\n";
			}
			break;
		}
	}
	
}