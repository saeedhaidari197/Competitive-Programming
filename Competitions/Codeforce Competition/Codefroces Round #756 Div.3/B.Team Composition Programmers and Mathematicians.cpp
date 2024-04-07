#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a , b;
		cin>> a >> b;
		cout<<min(min(a,b) , (a+b)/4)<<"\n";
	}
}