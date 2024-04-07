#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b , c, n;
		cin>>a>>b>>c>>n;
		int m = max(max(a,b),c);
		n -= m-a; n -= m-b; n -= m-c;
		if(n >= 0 && n%3 == 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}