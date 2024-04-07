#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test; cin>>test;
	while(test--){
		int a, b , c;
		cin>> a >> b >> c;
		int half = abs(a-b);
		int mx = half*2;
		if(max(a,b) > mx) cout<<"-1\n";
		else{
			if(c > mx) cout<<"-1\n";
			else if(c <= half) cout<<c+half<<"\n";
			else if(c > half) cout<<c - half<<"\n";
		}
	}
}