#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int one = 0; 
		int zero = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '0') zero++;
			else one++;
		}
		int cnt = min(one , zero);
		if(cnt%2 == 1) cout<<"DA"<<"\n";
		else cout<<"NET"<<"\n";
	}
}