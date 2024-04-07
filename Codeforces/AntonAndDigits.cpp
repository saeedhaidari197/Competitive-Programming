#include<iostream>
#include <algorithm>
using namespace std;

main(){
	int k2, k3, k5, k6;
	cin>> k2 >> k3 >> k5 >> k6;
	int m = min(min(k2,k5),k6);
	int res;
	if(m != 0) res = 256*m;
	k2 -= m;
	m = min(k2,k3);
	if(m > 0) res = res + m*32;
	cout<<res;
	
}