#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b; 
		cin>> a >> b;
		int dif = abs(a - b);
		if(a == 0 && b == 0) cout<<0<<"\n";
		else if(dif == 0) cout<<1<<"\n";
		else if(dif%2 == 0) cout<<2<<"\n";
		else if(dif%2 == 1) cout<<-1<<"\n";
	}
}