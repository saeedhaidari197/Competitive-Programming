#include <iostream>
#include <string>
using namespace std;

main(){
	string s; 
	cin>>s;
	int z = 0, o = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'z') z++;
		else o++;
	}
	if(2*z == o) cout<<"Yes";
	else cout<<"No";
}