#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		if(n == 5){
			bool T = true, I = true, M = true, U = true, R = true;
			for(int i=0; i<s.size(); i++){
				
				if(s[i] == 'T' && T == true){
					s.erase(s.begin() + i);
					T = false;
					i--;
				}
				else if(s[i] == 'i' && I == true){
					s.erase(s.begin() + i);
					I = false;
					i--;
				}
				else if(s[i] == 'm' && M == true){
					s.erase(s.begin() + i);
					M = false;
					i--;
				}
				else if(s[i] == 'u' && U == true){
					s.erase(s.begin() + i);
					U = false;
					i--;
				}
				else if(s[i] == 'r' && R == true){
					s.erase(s.begin() + i);
					R = false;
					i--;
				}
			}
			if(s.size() == 0) cout<<"YES\n";
			else cout<<"NO\n";
			
		}
		else{
			cout<<"NO\n";
		}
	}
}