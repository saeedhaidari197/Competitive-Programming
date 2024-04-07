#include <iostream>
using namespace std;
 
int main() {
	int test; cin >> test;
	while (test--) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int L = n * (a - b), R = n * (a + b);
		if (R < c - d || c + d < L)
		    cout << "No"<<"\n";
		else
		    cout << "Yes"<<"\n";
	}
}