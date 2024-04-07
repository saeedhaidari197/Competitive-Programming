#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, k; 
		cin>> n >> k;
		int a[n] , b[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++) cin>>b[i];
		
		sort(a, a+n);
		sort(b , b+n, greater<int>());
		bool possible = true;
		for(int i=0; i<n; i++){
			if(a[i] + b[i] > k){
				possible = false;
				break;
			} 
		}
		cout<<(possible ? "YES\n" : "NO\n");
	}
}