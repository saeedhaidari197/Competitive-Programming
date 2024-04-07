#include<bits/stdc++.h>
using namespace std;

main(){
	int n , m;
	cin>> n >> m;
	if(n == m) cout<<n<<"1 "<<m<<"2\n";
	else if(m - n == 1) cout<<n<<"9 "<<m<<"0\n";
	else if(n == 9 && m == 1) cout<<n<<" "<<m<<"0\n";
	else cout<<"-1\n";
}