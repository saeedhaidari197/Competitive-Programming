#include <iostream>
#include <string>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') cout<<"YES"<<"\n";
		else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') cout<<"YES"<<"\n";
		else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<"\n";
		else if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<"\n";
		else if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}