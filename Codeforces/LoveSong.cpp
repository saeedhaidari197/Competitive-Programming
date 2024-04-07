#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int q; cin>>q;
	string s; cin>>s;

	vector <int> alphabetIdx(n + 1, 0);

	for( int i =0; i < n; i++) {
		alphabetIdx[i + 1] = s[i] - 'a' + 1;
	}

	vector <int> prefSum(n + 1, 0);

	for (int i = 1; i< n + 1; i++) {
		prefSum[i] = alphabetIdx[i] + prefSum[i - 1];
	}

	while (q--) {
		int l, r;
		cin >> l >> r;

		cout << prefSum[r] - prefSum[l - 1] << '\n';
	}
}