#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a, b , c ,d;
		cin>> a >> b >> c >> d;
		cout<<max(a,b)<<" "<<max(b,c)<<" "<<min(c,d)<<"\n";
	}
}