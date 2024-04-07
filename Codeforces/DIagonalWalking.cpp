#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int res = n;
	string s; cin>>s;
	for(int i=0; i<n-1; i++){
		if(s[i] == 'U' && s[i+1] == 'R'){
			res--;
			i++;
		}
		else if(s[i] == 'R' && s[i+1] == 'U'){
			res--;
			i++;
		}
	}
	cout<<res<<"\n";
}