#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a, b, c, r;
        cin >> a >> b >> c >> r;
        int L = max(min(a, b), c - r);
        int R = min(max(a, b), c + r);
        cout << max(a, b) - min(a, b) - max(0, R - L) << endl;
	}
}