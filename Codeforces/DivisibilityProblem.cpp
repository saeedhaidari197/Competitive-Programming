#include<iostream>
using namespace std;

main(){
	int test;
	int n1, n2;
	cin>> test;
	while(test--){
		cin>> n1 >> n2;
		if(n1%n2 == 0) cout<<0<<"\n";
		else{
		int res = n2 - (n1%n2);
		cout<<res<<"\n";
		}
	}
}