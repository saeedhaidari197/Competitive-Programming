#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int num , n , m;
		cin>> num >> n >> m;
		while(num > 20 && n > 0){
			num = num/2+10;
			n--;
		}
		while(m-- && num > 0){
			num = num - 10;
		}
		if(num > 0) cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n";
	}
}