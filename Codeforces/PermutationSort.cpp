#include<bits/stdc++.h>
using namespace std;

main() {
  int test; cin>>test;
  while (test--) {
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    int ans = 2;
    if (is_sorted(arr.begin(), arr.end())) ans = 0;
    else if (arr[0] == 1 || arr[n - 1] == n) ans = 1;
    else if (arr[0] == n && arr[n - 1] == 1) ans = 3;
	cout<<ans<<"\n";
  }
}