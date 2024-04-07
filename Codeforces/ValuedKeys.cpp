#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1 , res, s2;
	cin>> s1 >> res;
	bool possible = true;
	for(int i=0; i<s1.size(); i++){
		if(s1[i] == res[i]) s2.push_back(s1[i]);
		else if(s1[i] > res[i]) s2.push_back(res[i]);
		else{
			possible = false;
			break;
		}
	}
	if(possible) cout<<s2<<"\n";
	else cout<<-1<<"\n";
	return 0;
}