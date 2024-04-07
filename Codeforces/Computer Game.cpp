#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s1 , s2;
		cin>> s1 >> s2;
		bool possible = true;
		for(int i=0; i<n; i++){
			if(s1[i] == '1' && s2[i] == '1'){
				possible = false;
				break;
			}
		}
		cout<<(possible ? "YES\n" : "NO\n");
	}
}