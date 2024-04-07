#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int index = -1;
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'a'){
				index = i;
				break;
			}
		}
		if(index < 0) cout<<"NO\n";
		else{
			int front = index - 1;
			int back = index + 1;
			char alp = 'b';
			while(true){
				if(front < 0 && back == s.size()){
					cout<<"YES\n";
					break;
				}
				if(s[front] == alp){
					front--;
					alp++;
				}
				else if(s[back] == alp){
					back++;
					alp++;
				}
				else{
					cout<<"NO\n";
					break;
				}
			}
		}
	}
}