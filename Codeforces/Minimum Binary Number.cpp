#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int zero = 0 , one = 0;
	for(int i=0; i<n; i++){
		char c; cin>>c;
		if(c == '0') zero++;
		else one++;
	}
	if(one == 0) cout<<0<<"\n";
	else{
		cout<<1;
		for(int i=0; i<zero; i++) cout<<0;
		cout<<"\n";
	}
}