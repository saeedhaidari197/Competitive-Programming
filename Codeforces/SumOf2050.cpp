#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		int count = 0;
		while(true){
			int digits = (long long)log10(n) +1;
			if(n < 2050 ) break;
			long long num = 2050 * (pow(10,digits-4));
			if(n/num == 0){
				num = num / 10;
			}
			count = count + (n/num);
			n = n%num;
		}
		if(n != 0) cout<<-1<<"\n";
		else cout<<count<<"\n";
	}
}