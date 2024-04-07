#include <iostream>
using namespace std;

main(){
	int test;
	cin>>test;
	while(test--){
		int a , b;
		cin>> a >> b;
		if(a >= b*2) cout<<a*a<<"\n";
		else if(b >= a*2) cout<<b*b<<"\n";
		else if(a >= b) cout<<b*b*4<<"\n";
		else if(b >= a) cout<<a*a*4<<"\n";
	}
}