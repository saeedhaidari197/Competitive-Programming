#include <iostream>
#include <math.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int count = 1;
		if(n == 1) cout<<0<<"\n";
		else if(n == 2) cout<<1<<"\n";
		else if(n == 3) cout<<2<<"\n";
		else{
			while(n != 2){
				if(n%2 == 0){
					n=2;
					count++;
				}
				else{
					n--;
					count++;
				}
			}
			cout<<count<<"\n";
		}		
	}
}