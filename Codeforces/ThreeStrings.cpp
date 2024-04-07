#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string a, b , c;
		cin>> a >> b >> c;
		int size = a.size();
		bool possible = true;
		for(int i=0; i<size; i++){
			if(a[i] != c[i] && b[i] != c[i]){
				possible = false;
				break;
			}
		}
		if(possible) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}