#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int test; cin>>test;
	while(test--){
		int n; cin>>n; 
		int arr[n];
		int mx = 0;
		int mn = n;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] > mx) mx = arr[i];
			if(arr[i] < mn) mn = arr[i];
		}
		int rcount= 0; int lcount = 0;
		for(int i=0; i<n; i++){
			if(arr[i] == mn || arr[i] == mx){
				lcount++;
				break;
			}
			else lcount++;
		}
		for(int i=n-1; i>=0; i--){
			if(arr[i] == mn || arr[i] == mx){
				rcount++;
				break;
			}
			rcount++;
		}
		int out = rcount + lcount;
		lcount = 0; rcount = 0;
		bool foundmin = false, foundmax = false;
		for(int i=0; i<n; i++){
			if(!foundmin){
				if(arr[i] == mn){
					foundmin = true;
				}
			}
			if(!foundmax){
				if(arr[i] == mx){
					foundmax = true;
				}
			}
			lcount++;
			if(foundmin && foundmax) break;
		}
		foundmin = false; foundmax = false;
		for(int i=n-1; i>=0; i--){
			if(!foundmin){
				if(arr[i] == mn){
					foundmin = true;
				}
			}
			if(!foundmax){
				if(arr[i] == mx){
					foundmax = true;
				}
			}
			rcount++;
			if(foundmin && foundmax) break;
		}
		int in = min(lcount,rcount);
		cout<<min(out,in)<<"\n";
	}
}


//Easy One From Codeforce
//#include <bits/stdc++.h>
//#include "random"
//
//using namespace std;
//
//using ll = long long;
//using ld = long double;
//using pii = pair<int, int>;
//using cd = complex<ld>;
//
//void solve() {
//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for (int &e : v) {
//        cin >> e;
//    }
//    int maxPos = max_element(v.begin(), v.end()) - v.begin();
//    int minPos = min_element(v.begin(), v.end()) - v.begin();
//    cout << min({
//            max(maxPos, minPos) + 1,
//            (n - 1) - min(maxPos, minPos) + 1,
//            (n - 1) - maxPos + minPos + 2,
//            (n - 1) - minPos + maxPos + 2
//    }) << "\n";
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//}