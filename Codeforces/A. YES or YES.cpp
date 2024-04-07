#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string res = "";
		string s; cin>>s;
		if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')) res = "YES";
		else res = "NO";
		
		cout<<res<<"\n";
	}
}