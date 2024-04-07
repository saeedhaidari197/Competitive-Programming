#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	int games;
	int Anton=0, Danik=0;
	cin >> games;
	string s;
	cin >> s;
	
	for(int i = 0; i<s.length(); i++){
		if(s[i] == 'A') Anton++;
		if(s[i] == 'D') Danik++;
	}
	if(Anton > Danik) cout<<"Anton";
	else if(Danik > Anton) cout<<"Danik";
	else cout<<"Friendship";
	
}