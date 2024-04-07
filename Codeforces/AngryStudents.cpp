#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		int count = 0;
		while(true){
			bool done = false;
			for(int i=0; i<n-1; i++){
				if(s[i] == 'A' && s[i+1] == 'P'){
					s[i+1] = 'A';
					i++;
					done = true;
				}
			}
			if(done) count++;
			else break;
		}
		cout<<count<<"\n";
	}
}