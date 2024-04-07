#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int x , y;
		cin>> x >> y;
		if((x+y)%2 == 1) cout<<"-1 -1\n";
		else cout<<x/2 + (x%2 == 1)<<" "<<y/2<<"\n";
	}
}