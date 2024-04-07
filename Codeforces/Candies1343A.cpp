#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int res = 0;
		for(int i=2; i<30; i++){
			int div = pow(2,i)-1;
			if(n%div) continue;
			res = n/div;
			break;
		}
		cout<<res<<"\n";
	}
		
}