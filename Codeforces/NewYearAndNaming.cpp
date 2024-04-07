#include <bits/stdc++.h>
using namespace std;

main(){
	int n , m; cin>> n >> m;
	string s[n] , t[m];
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	for(int i=0; i<m; i++){
		cin>>t[i];
	}
	int test; cin>>test;
	while(test--){
		int num; cin>>num;
		if(num > n){
			int index = num%n;
			if(index == 0) cout<<s[n-1];
			else cout<<s[index-1];
		}
		else cout<<s[num-1];
		if(num > m){
			int index = num%m;
			if(index == 0) cout<<t[m-1];
			else cout<<t[index-1];
		}
		else cout<<t[num-1];
		cout<<"\n";
	}
}