#include <bits/stdc++.h>

using namespace std;

const int L = 26;
int cnt[L];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		memset(cnt, 0, sizeof(cnt));
		for (auto c : s) cnt[c - 'a']++;
		int cnt1 = 0;
		int cnt2 = 0;
		for (int i = 0; i < L; i++)
			if (cnt[i] == 1)
				cnt1++;
			else if (cnt[i] > 0)
				cnt2++;
		cout << (cnt2 + cnt1 / 2) << endl;
	}
	return 0;
}