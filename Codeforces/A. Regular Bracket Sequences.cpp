#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin >> n;

	string s = "";

	for(int i = 0; i<n; i++) {
		s += "()";
	}

	cout << s << '\n';

	int cnt = 1;

	while (cnt < n) {

		cout << string(cnt, '(');
		cout << s.substr(0, s.size() - (2 * cnt));
		cout << string(cnt, ')') << '\n';

		++cnt;
	}
}

main() {
 	
	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}

}