#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		long long c1 = n/3 , c2 = n/3;
		if(n%3 == 2) c2++;
		else if(n%3 == 1) c1++;
		cout<<c1<<" "<<c2<<"\n";
	}
}