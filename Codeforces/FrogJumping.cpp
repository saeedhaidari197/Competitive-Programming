#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a , b , k; 
		cin>> a >> b >> k;
		long long res;
		if(k%2 == 0){
			res = ((k/2)*a) - ((k/2)*b);
		}
		else{
			k++;
			res = ((k/2)*a) - (((k/2)-1)*b);
		}
		cout<<res<<"\n";
	}
}