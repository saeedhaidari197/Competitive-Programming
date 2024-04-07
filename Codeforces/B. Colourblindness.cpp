#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s1, s2;
		cin>>s1>>s2;
		bool res = true;
		for(int i=0; i<n; i++){
			if(!res) break;
			if(s1[i] != s2[i]){
				if(s1[i] == 'G' && s2[i] == 'R') res = false;
				else if(s1[i] == 'R' && s2[i] == 'G') res = false;
				else if(s1[i] == 'B' && s2[i] == 'R') res = false;
				else if(s1[i] == 'R' && s2[i] == 'B') res = false;	
			}
			
		}
		cout<<(res ? "YES\n" : "NO\n");
	}
}