#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int zero = 0;
	int one = 0;
	for(int i=0; i<n; i++){
		char num; cin>>num;
		if(num == '1')one++;
		else zero++;
	}
	cout<<max(one,zero) - min(one, zero)<<"\n";
}