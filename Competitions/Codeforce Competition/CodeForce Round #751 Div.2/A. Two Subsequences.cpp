#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		char min = 'z' + 1;
		int index = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] < min){
				min = s[i];
				index = i;
			}
		}
		s.erase(s.begin()+index);
		cout<<min<<" "<<s<<"\n";
	}
}