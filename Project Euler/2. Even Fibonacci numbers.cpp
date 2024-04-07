#include<bits/stdc++.h>
using namespace std;

main(){
	long long pre = 0;
	long long n = 2;
	long long ans = 2;
	while(true){
		int res = ((n*2) *2) + pre;
		pre = n;
		n = res;
		if(res > 4000000) break;
		else ans += res;
	}
	cout<<ans;
}