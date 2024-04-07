#include<bits/stdc++.h>
using namespace std;

main(){
	string s; 
	cin>>s;
	int a = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'a') a++;
	}
	a = a + (a-1);
	if(s.size() >= a) cout<<a<<"\n";
	else cout<<s.size()<<"\n"; 
}