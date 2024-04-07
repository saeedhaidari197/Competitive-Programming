//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int test; cin>>test;
//	while(test--){
//		long long n , k;
//		cin>> n >> k;
//		int arr[n];
//		for(int i=0; i<n; i++){
//			cin>>arr[i];
//		}
//		unsigned long long res = 0;
//		for(int i=0; i<n-1; i++){
//			long long num = pow(10 , arr[i]);
//			int def = abs(arr[i+1] - arr[i]);
//			long long nm = 0;
//			while(def > 0){
//				nm = (nm*10) + 9;
//				def--;
//			}
//			if( k <= nm){
//				res += (k*num) + num ;
//				k = 0;
//				break;
//			}
//			else{
//				k -= nm;
//				res += nm*num;
//			}
//		}
//		if( k > 0){
//			long long num = pow(10 , arr[n-1]);
//			res = res + ((k * num )+ num);
//		}
//		cout<<res<<"\n";
//	}
//}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll a[20];
 
int main() {
	int T;
	cin >> T;
	while(T--) {
		ll n, k, ans = 0;
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		k++;
		for(int i = 1; i < n; i++) {
			if(k <= 0) break;
			ll t1 = pow(10, a[i + 1] - a[i]);
			ll t = min(k, t1 - 1);
			ans += t * pow(10, a[i]);
			k -= t;
		}
		if(k > 0) ans += k * pow(10, a[n]);
		cout << ans << "\n";
	}
}