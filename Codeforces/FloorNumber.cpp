#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , x;
		cin>>n >> x;
		if(n < 3) cout<<1<<"\n";
		else{
			int res = ((n-3)/x) + 2;
			cout<<res<<"\n"; 
		}
	}
}