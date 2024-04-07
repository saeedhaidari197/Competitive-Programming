#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int toast = k*l/nl;
	int sli = c*d;
	int salt = p/np;
	int num = min(min(toast,sli),salt)/n;
	cout<<num;
}