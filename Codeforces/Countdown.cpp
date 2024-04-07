#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int ans = 0;
		for(int i=0; i<n; i++){
			char s; cin>>s;
			int num = s - 48;
			ans += num;
			if(num > 0 && i != n-1) ans++;
		}
		cout<<ans<<"\n";
	}
}