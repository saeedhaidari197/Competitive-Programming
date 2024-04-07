#include <iostream>
using namespace std;

main(){
	int test; cin >> test;
	while (test--){
		int l , r;
		cin>> l >> r;
		if(2*l > r) cout<<-1<<" "<<-1<<"\n";
		else cout<<l<<" "<<l*2<<"\n";
	}
}