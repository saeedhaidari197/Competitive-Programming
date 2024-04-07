#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int num; cin>>num;
		int num1 = num/2020;
		int num2 = num%2020;
		if(num2 <= num1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}