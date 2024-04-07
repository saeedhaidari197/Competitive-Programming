#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		long long x , y;
		cin>> x >> y;
		if(x%2==0 && y%2==0) cout<<"YES"<<"\n";
		else if((x%2 == 1 && y%2 == 0) || (x%2 == 0 && y%2 == 1))
		{
			if(x - y >= 2) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
}