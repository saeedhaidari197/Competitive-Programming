#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;            //Partialy Accepted
	int count = 1;
	n--;
	int num; cin>>num;
	string s;
	int L=0, R = 0;
	for(int i=0; i<n; i++){
		cin>>s;
		cin>>num;
		if(s[0] == 'L'){
			L = s.size();
		}
		if(s[0] == 'R'){
			R = s.size();
		}
	}
	cout<<count+R+L<<"\n";
}