#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int k1 , k2; cin>> k1 >> k2;
		string s;
		for(int i=0; i<k1; i++){
			int num; cin>>num;
			if(num == n) s = "YES";
		}
		for(int i=0; i<k2; i++){
			int num; cin>>num;
			if(num == n) s = "NO";
		}
		cout<<s<<"\n";
	}
}