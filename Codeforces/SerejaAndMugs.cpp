#include<bits/stdc++.h>
using namespace std;

main(){
	int n , s;
	cin>> n >> s;
	int max = 0;
	int sum = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		sum += num;
		if(num > max) max = num;
	}
	sum -= max;
	if(sum <= s) cout<<"YES\n";
	else cout<<"NO\n";
}