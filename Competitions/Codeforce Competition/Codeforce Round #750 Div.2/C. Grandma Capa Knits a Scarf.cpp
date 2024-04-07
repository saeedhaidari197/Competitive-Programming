#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		int ans = n+1;
		for(int i=0; i<26; i++){
			char c = 'a' + i;
			int count = 0 , l = 0, r = n-1;
			while(l <= r){
				if(s[l] == s[r]) l++ , r--;
				else if(s[l] == c) l++, count++;
				else if(s[r] == c) r--, count++;
				else{
					count = n+1;
					break;
				}
			}
			ans = min(ans, count);
		}
		if(ans == n+1) cout<<"-1\n";
		else cout<<ans<<"\n";
	}
}