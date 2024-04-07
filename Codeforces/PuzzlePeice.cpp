#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int r , c;
		cin>> r >> c;
		if(r == 1 || c == 1) cout<<"YES"<<"\n";
		else if(r == 2 && c == 2) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}