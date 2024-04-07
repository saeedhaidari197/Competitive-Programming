#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long num;
		cin>>num;
		if (num == 2)cout<<"NO"<<"\n";
		else if(num%2 == 1) cout<<"YES"<<"\n";
		else{
			while((num/2)%2 == 0 && num != 2){
				num /= 2;
			}
			if(num <= 2)cout<<"NO"<<"\n";
			else cout<<"YES"<<"\n";
		}
	}
		
}