#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll t,k,x;
bool ck(ll m){
	if(m<=k)return m*(m+1)/2<x;
	else return k*(k-1)+k-(2*k-1-m)*(2*k-m)/2<x;
}
 
 
int main(){
	cin>>t;
	while(t--){
		cin>>k>>x;
		ll l=1, r=2*k-1, mid;
		while(l<r){
			mid = l + r >> 1;
			if(ck(mid))l=mid+1;
			else r=mid;
		}
		cout<<l<<"\n";
	}
	return 0;
}