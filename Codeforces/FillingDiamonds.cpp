#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int num = (n*2) + (n-1)*2; cout<<num;
		int clr = (4*n) - 2;cout<<clr;
		if(num == clr) cout<<1<<"\n";
		else cout<<2<<"\n";
	}
}