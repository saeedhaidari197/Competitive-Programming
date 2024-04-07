#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int count = 0;
		int flag1 = 0 , flag2 = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '(') flag1++;
			else if(s[i] == ')'){
				if(flag1){
					flag1--;
					count++;
				}
			}
			else if(s[i] == '[') flag2++;
			else if(s[i] == ']'){
				if(flag2){
					flag2--;
					count++;
				}
			}
		}
		cout<<count<<"\n";
	}
}