#include <iostream>
using namespace std;

main(){
	string s;
	cin>>s;
	bool done = false;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			done = true;
			break;
		}
	}
	if(done) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
}