#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		if(n <= 6) cout<<15<<"\n";
		else if(n%6 == 0) cout<<(n/6) * 15<<"\n";
		else if(n%6 == 1 || n%6 == 2) cout<<(((n/6) - 1) * 15) + 20<<"\n";
		else if(n%6 == 3 || n%6 == 4) cout<<(((n/6) - 1) * 15) + 25<<"\n";
		else if(n%6 == 5) cout<<((n/6) + 1) * 15<<"\n";
	}
}