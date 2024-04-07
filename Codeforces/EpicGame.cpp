#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int a, b, k;
	cin>> a >> b >> k;
	bool simon;
	while(k>0){
		int num = __gcd(a,k);
		if(k - num >= 0){
			simon = true;
			k = k-num;
		}
		else break;
		if(k > 0){
			num = __gcd(b,k);
			if(k-num >= 0){
				simon = false;
				k -= num;
			}
			else break;
		}
	}
	if(simon) cout<<0;
	else cout<<1;
}
