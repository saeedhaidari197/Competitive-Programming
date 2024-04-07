#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	if(n%4 == 1) cout<<"0 A\n";
	else if(n%4 == 2) cout<<"1 B\n";
	else if(n%4 == 3) cout<<"2 A\n";
	else if(n%4 == 0) cout<<"1 A\n";
}