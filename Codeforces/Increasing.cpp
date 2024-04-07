#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		set<int> myset(arr, arr + n);
		if(myset.size() == n) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}