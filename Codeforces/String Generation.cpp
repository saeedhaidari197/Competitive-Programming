#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s = "abc";
		int n; cin>>n;
		int k; cin>>k;
		int time = n/3;
		for(int i=0; i<time; i++) cout<<s;
		time = n%3;
		if(time == 1)cout<<"a\n";
		else if(time == 2)cout<<"ab\n";
		else cout<<"\n";
	}
}