#include<bits/stdc++.h>
using namespace std;

main(){
	string s , t;
	cin>>s >> t;
	int back1 = s.size()-1 , back2 = t.size()-1;
	int count = 0;
	while(back1 >= 0 && back2 >= 0){
		if(s[back1] == t[back2]) count++;
		else break;
		back1--;
		back2--;
	}
	cout<<(s.size() - count) + (t.size() - count)<<"\n";
}