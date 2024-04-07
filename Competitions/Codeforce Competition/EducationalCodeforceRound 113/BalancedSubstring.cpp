#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		if(n == 1) cout<<-1<<" "<<-1<<"\n";
		else{
			bool found = false;
			int l , r;
			for(int i=0; i<n-1; i++){
				if(s[i] != s[i+1]){
					l = i+1;
					r = i+2;
					found = true;
					break;
				}
			}
			if(found) cout<<l<<" "<<r<<"\n";
			else cout<<"-1 -1\n";
		}
	}
}