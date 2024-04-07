#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	cin>>s;
	int line = 0 , pearl = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '-') line++;
		else pearl++;
	}
	if(pearl == 0) cout<<"YES\n";
	else if(line % pearl == 0) cout<<"YES\n";
	else cout<<"NO\n";
	
	return 0;
}