#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	string s, t, rev;
	cin>> s >> t;
	reverse(s.begin(), s.end());
	if(s == t) cout<<"YES";
	else cout<<"NO";
	
	
}