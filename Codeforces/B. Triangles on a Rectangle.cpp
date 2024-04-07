#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int w,h;
	cin >> w >> h;
	long long ans = 0;
	for(int i=0;i<4;++i){
		int k;
		cin >> k;
		long long a[k];
		for(int i=0;i<k;++i){
			cin >> a[i];
		}
 
		ans = max(ans,(i<2? h : w)*(a[k-1]-a[0]));
	}
	cout << ans << '\n';
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}