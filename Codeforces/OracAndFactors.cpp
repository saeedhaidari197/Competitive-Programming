#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int k; cin>>k;
		for(int i=2; i<=n; i++){
			if(n%i == 0){
				n += i;
				k--;
				n += (k*2);
				break;
			}
		}
		cout<<n<<"\n";
	}
}