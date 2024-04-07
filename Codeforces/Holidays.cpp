#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int min = 2 * (n/7);
	int max = n%7;
	
	if(max == 6) cout<<min + 1<<" "; else cout<<min<<" ";
	if(max == 1)cout<<min+1<<"\n";
	else if(max >= 2) cout<<min+2<<"\n";
	else cout<<min<<"\n";
}