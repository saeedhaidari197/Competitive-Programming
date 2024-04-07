#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		int dif = n - 11;
		if(dif < 0) cout<<"NO\n";
		else if(dif == 0 && s[0] != '8') cout<<"NO\n";
		else if(dif == 0 && s[0] == '8') cout<<"YES\n";
		else{
			bool possible = false;
			for(int i=0; i<=dif; i++){
				if(s[i] == '8'){
					possible = true;
					break;
				}
			}
			cout<<(possible ? "YES\n" : "No\n");
		}
	}
}