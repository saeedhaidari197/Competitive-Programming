#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n;
	cin >> n;

	bool isNegative = false;
	int maxVal = INT_MIN;

	for(int i=0; i<n; i++) {
		int val;
		cin >> val;

		if (val < 0) {
			isNegative = true;
		}

		maxVal = max(maxVal, val);
	}

	if (isNegative) {
		cout << "NO";
	}
	else {
		cout << "YES" << '\n';
		cout << maxVal + 1 << '\n';

		for(int i = 0; i<maxVal + 1; i++) {
			cout << i << ' ';
		}
	}
}

main() {

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
		cout << '\n';
	}
}