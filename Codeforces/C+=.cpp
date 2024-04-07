#include <iostream>
#include <algorithm>
using namespace std;
main(){
	int test; cin>>test;
	while(test--){
		int a,b,c;
		cin>>a>>b>>c;
		int mx = max(a,b);
		int mn = min(a,b);
		int count = 0;
		while(true){
			mn += mx;
			count++;
			if(mn > c) break;
			mx += mn;
			count++;
			if(mx > c) break;
		}
		cout<<count<<"\n";
	}
}
