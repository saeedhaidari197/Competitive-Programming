#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	string rev = s;
	int count = 1;
	while(true){
		char last = rev[rev.size()-1];
		rev.pop_back();
		rev.insert(rev.begin()+0, last);
		if(rev == s) break;
		else count++;
	}
	cout<<count<<"\n";
	return 0;
}