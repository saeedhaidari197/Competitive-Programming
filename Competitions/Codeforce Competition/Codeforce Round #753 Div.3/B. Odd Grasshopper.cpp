#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long k; cin>>k;
		if(n%2 == 0){
			if(k%2 == 0){
				if((k/2) % 2 == 0) cout<<n<<"\n";
				else cout<<n+1<<"\n";
			}
			else{
				if((k/2) % 2 == 0) cout<<n-k<<"\n";
				else cout<<n + (k+1)<<"\n";
			}
		}
		else{
			if(k%2==0){
				if((k/2) %2 == 0) cout<<n<<"\n";
				else cout<<n-1<<"\n";
			}
			else{
				if((k/2) % 2 == 0) cout<<n+k<<"\n";
				else cout<<n - (k+1)<<"\n";
			}
		}
	}
}