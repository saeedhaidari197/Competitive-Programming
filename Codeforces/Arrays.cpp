#include<bits/stdc++.h>
using namespace std;

main(){
	int n , m;
	cin>>n >> m;
	long long min , max;
	cin>>min >> max;
	bool found = false;
	for(int i=1; i<=n; i++){
		long long num; cin>>num;
		if(!found && i == min) min = num , found = true;
	}
	found = false;
	max  = (m - max) + 1;
	for(int i=1; i<=m; i++){
		long long num; cin>>num;
		if(!found && i == max) max = num , found = true;
	}
	if(min < max) cout<<"YES\n";
	else cout<<"NO\n";
}