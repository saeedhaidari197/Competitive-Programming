#include <bits/stdc++.h>
using namespace std;

main(){
	string s;
	cin>>s;
	int count = -1;
	bool possible = true;
	for(int i=0; i<s.size(); i++){
		if(s[i] != '1' && s[i] != '4' ){
			possible = false;
			break;
		}
		else if(s[i] == '4'){
			if(count < 0){
				possible = false;
				break;
			}
			else if(count == 1) count = -1;
			else count--;
		}
		else if(s[i] == '1') count = 2;
	}
	cout << (possible ? "YES" : "NO") <<"\n";
}