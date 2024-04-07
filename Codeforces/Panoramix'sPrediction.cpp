#include <iostream>
using namespace std;
bool isPrime(int num){
	bool res = true;
	for(int i=2; i<num; i++){
		if(num%i == 0){
			res = false;
			break;
		}
	}
	return res;
}
main(){
	int n , m;
	cin >> n >> m;
	bool res = true;
	if(isPrime(m)){
		for(int i=m-1; i>n; i--){
			if(isPrime(i)){
				res = false;
				break;
			}
		}
		cout << (res ? "YES" : "NO")<<"\n";
	}
	else cout<<"NO";
}