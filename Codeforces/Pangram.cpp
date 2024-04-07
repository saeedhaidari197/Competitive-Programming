#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

main(){
	int n;
	cin>>n;
	string s;
	cin>> s;
	if(n < 26) cout<<"NO";
	else{
		for_each(s.begin(), s.end(), [](char & c) {
        	c = ::tolower(c);
    	});
    	set <char> word;
    	for(int i=0; i<s.length(); i++)
    	{
    		word.insert(s[i]);
		}
    	if(word.size() == 26){
    		cout<<"YES";
		}
		else cout<<"NO";
	}
}