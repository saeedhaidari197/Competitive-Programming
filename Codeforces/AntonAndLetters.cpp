#include <iostream>
#include <set>
#include <string>
using namespace std;

main(){
	string s;
	set<char> ch;
	getline(cin, s);
	for(int i =0; i<s.length(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			ch.insert(s[i]);		
		}
	}

	cout<<ch.size();
}