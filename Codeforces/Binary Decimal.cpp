
#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n;
	cin >> n;

	int maxDigit = 0;

	while (n) {
		int digit = n % 10;
		maxDigit = max(maxDigit, digit);
		n /= 10;
	}

	cout << maxDigit;
}

int32_t main() {

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
		cout << '\n';
	}

	return 0;
}
