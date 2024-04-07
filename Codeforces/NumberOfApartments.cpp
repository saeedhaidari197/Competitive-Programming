#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int r3 = n/3;
		int rem = n%3;
		if(rem == 0) cout<<r3<<" "<<0<<" "<<0<<"\n";
		else if(rem == 1 && r3 >= 2) cout<<r3-2<<" "<<0<<" "<<1<<"\n";
		else if(rem == 2 && r3 >= 1) cout<<r3-1<<" "<<1<<" "<<0<<"\n";
		else cout<<-1<<"\n";
	}
}