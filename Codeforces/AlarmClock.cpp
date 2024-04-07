#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long a , b , c , d;
		cin>>a >> b >> c >> d;
		if(b >= a) cout<<b<<"\n";
		else if(d >= c) cout<<-1<<"\n";
		else{
			int need = a - b;
			int rest = c-d;
			int count;
			if(need%rest == 0) count = need/rest;
			else count = need/rest +1;
			cout<<b+(count*c)<<"\n";
		}
	}
}