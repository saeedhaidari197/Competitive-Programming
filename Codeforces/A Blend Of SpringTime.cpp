#include<bits/stdc++.h>
using namespace std;

int main(){
	string str; cin>>str;
	bool possible = false;
	for(int i=0; i<str.size(); i++){
		if ((str[i]=='A' && str[i+1]=='B' && str[i+2]=='C') || (str[i]=='A' && str[i+1]=='C' && str[i+2]=='B') ||
            (str[i]=='B' && str[i+1]=='A' && str[i+2]=='C') || (str[i]=='B' && str[i+1]=='C' && str[i+2]=='A') ||
            (str[i]=='C' && str[i+1]=='B' && str[i+2]=='A') || (str[i]=='C' && str[i+1]=='A' && str[i+2]=='B')){
            	possible = true; break;	
			} 
	}
	cout<<(possible ? "YES\n" : "NO\n");
	return 0;
}