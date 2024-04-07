#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int k; cin>>k;
	
	int div = n%k;
	int res = k - div;
	cout<<n+res<<"\n";
}