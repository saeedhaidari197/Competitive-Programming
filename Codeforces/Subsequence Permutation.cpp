#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		string s1 = s;
		sort(s1.begin(),s1.end());
		int count = 0;
		for(int i=0; i<n; i++){
			if(s[i] != s1[i]) count++;
		}
		cout<<count<<"\n";
	}
}