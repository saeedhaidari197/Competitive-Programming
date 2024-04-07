#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	string s; cin>>s;
	int S = 0 , F = 0;
	for(int i=0; i<n-1; i++){
		if(s[i] == 'S' && s[i+1] == 'F') S++;
		else if(s[i] == 'F' && s[i+1] == 'S') F++;
	}
	if(S > F) cout<<"YES\n";
	else cout<<"NO\n";
}