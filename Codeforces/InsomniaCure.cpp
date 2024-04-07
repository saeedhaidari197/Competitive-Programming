#include <iostream>
using namespace std;

main(){
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int count = d;
	for(int i = 1; i<=d; i++){
		if(k == 1) break;
		if(i%k != 0 && i%l !=0 && i%m != 0 && i%n != 0) count--;
	}
	cout<<count;
}