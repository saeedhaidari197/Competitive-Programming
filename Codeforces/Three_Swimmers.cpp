#include <iostream>
#include <algorithm>
using namespace std;

main() {
	int test;
	cin >> test;
	while (test--) {
		long long p, a, b, c;
		cin >> p >> a >> b >> c;
		if (p % a == 0 || p % b == 0 || p % c == 0) cout<<0<<"\n";
		else {
			long long re = min(a-(p%a), min(b-(p%b), c-(p%c)));
			cout<<re<<"\n";
		}
	}
}