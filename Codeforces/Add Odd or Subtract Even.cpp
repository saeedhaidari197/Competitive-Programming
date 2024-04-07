#include <iostream>
#include <math.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a, b;
		cin>> a >> b;
		if(a > b){
			if((a%2 == 0 && b%2 == 0) || (a%2 == 1 && b%2 == 1)) cout<<1<<"\n";
			else cout<<2<<"\n";
		}
		if(a < b){
			if((a%2 == 0 && b%2 == 0) || (a%2 == 1 && b%2 == 1)) cout<<2<<"\n";
			else cout<<1<<"\n";
		}
		if(a == b) cout<<0<<"\n";
	}
}