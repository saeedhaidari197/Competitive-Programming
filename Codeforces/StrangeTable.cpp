#include <iostream>
#define ll long long
using namespace std;
main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	ll cas;
	cin>> cas;
	while(cas--){
		ll n,m,x;
		cin>> n >> m >> x;
		ll row = (x-1)%n;
		ll col = (x-1)/n;
		
		ll ans = (row*m) + (col+1);
		cout<<ans<<'\n';
	}
	

}