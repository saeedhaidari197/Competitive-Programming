#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n , l1 , l2;
		cin >> n >> l1 >> l2;
		if(l1*2 <= l2) cout<<n*l1<<"\n";
		else cout<<((n%2==1) * l1) + ((n/2) * l2)<<"\n";
	}
}