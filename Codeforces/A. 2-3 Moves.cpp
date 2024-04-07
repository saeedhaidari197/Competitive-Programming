#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n < 0) n = n * (-1);
		if( n % 3 == 0) cout<<n/3<<"\n";
		else if( n % 3 == 2) cout<<n/3 + 1 <<"\n";
		else{
			if(n == 4 || n == 1) cout<<2<<"\n";
			else{
				n = n -4;
				cout<<n/3 + 2<<"\n";
			}
			
		}
	}
}