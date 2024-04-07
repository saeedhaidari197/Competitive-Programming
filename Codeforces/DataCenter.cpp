#include <bits/stdc++.h>
using namespace std;

main() {
	int n;
	cin>>n;
	int rootn = sqrt(n);
	int i;
	for(i = rootn; i >=1; --i) {
		if((i * (n/i)) == n) {
			break;
		}
	}
	cout<<2*(i+n/i)<<"\n";
}