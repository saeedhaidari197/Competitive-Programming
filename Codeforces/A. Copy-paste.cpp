#include<bits/stdc++.h>
using namespace std;

int main() {
  int test; cin>>test;
  while (test--) {
  	int n , k; cin>> n >> k;
  	int arr[n+1];
	for (int i = 1; i <= n; ++i) {
		cin>>arr[i];
	}
  
	int mn = min_element(arr + 1, arr + n + 1) - arr;
	int ans = 0;
	  
	for (int i = 1; i <= n; ++i) {
	if (i != mn) {
	    while (arr[i] + arr[mn] <= k) {
	        arr[i] += arr[mn];
	        ++ans;
	    	}
	    }
	}
	cout<<ans<<"\n";
  }

  return 0;
}