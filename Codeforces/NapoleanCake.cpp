
#include<bits/stdc++.h>
using namespace std;

main(){
	// Time Exceed
//	int test; cin>>test;
//	while(test--){
//		int n; cin>>n;
//		int chk[n] = {0};
//		int arr[n];
//		for(int i=0; i<n; i++){
//			cin>>arr[i];
//			if(arr[i] > 0){
//				int j = i;
//				while(arr[i] > 0 && j >=0 ){
//					chk[j] = 1;
//					arr[i]--;
//					j--;
//					
//				} 
//			}
//		}
//		for(int i=0; i<n; i++) cout<<chk[i]<<" ";
//		cout<<"\n";
//	}
//}
ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// start the from the second to the last element
		for (int i = n - 2; i >= 0; i--) {
			// the current value depends on the maximum between the 
			// current value and the previous value subtracted by 1
			a[i] = max(a[i], max(0, a[i + 1] - 1));
		}
		for (int i = 0; i < n; i++) {
			cout << (a[i] > 0 ? 1 : 0) << " ";
		}
		cout << '\n';
	}
}