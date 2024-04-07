#include <iostream>
#include <math.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n == 1) cout<<10<<"\n";
		int res = pow(10,n);
		res = res - res/100 - ();
		cout<<res<<"\n";
	}
}