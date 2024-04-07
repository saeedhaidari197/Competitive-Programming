#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int b , p , f , e, o;
		cin>> b >> p >> f >> e >> o;
		b = b/2;
		int c=0 , h=0;
		if(e >= o){
			c = min(b,p) * e;
			b = b - p;
			if(b > 0){
				h = min(b,f) * o;
			}
		}	
		else{
			c = min(b,f) * o;
			b = b - f;
			if(b > 0){
				h = min(b,p) * e;
			}
		}	
		cout<<h+c<<"\n";
	}
}