#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	if(n <= 2) cout<<1<<"\n";
	else{
		int ans = 2*n / 3;
		if(n %3 == 1 ) ans++;
		cout<<ans<<"\n";
	} 
}