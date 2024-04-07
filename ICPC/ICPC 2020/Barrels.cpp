#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int volume;
		cin>>volume;
		string s; getline(cin,s);
		int total = 0;
		while(true){
			getline(cin,s);
			if(s == "\0")break;
			string T;
			stringstream x(s);
			while(getline(x, T, ' ')){
				int num = stoi(T);
				total += num;
			}
		}
		int res = total / volume;
		if(total%volume > 0) res++;
		cout<<res<<"\n";
	}
}