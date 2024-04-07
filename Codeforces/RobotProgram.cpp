#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b;
		cin >> a >> b;
		if(abs(a-b) <= 1) cout<<a+b<<"\n";
		else{
			int m = min(a,b);
			int res = (m*2) + ((max(a,b) - m )*2) - 1;
			cout<<res<<"\n";
		}
	}
}