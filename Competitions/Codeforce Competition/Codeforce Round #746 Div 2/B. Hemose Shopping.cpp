#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , x;
		cin>> n >> x;
		int a[n] , b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i] = a[i];
		}
	    bool test = false;
	    sort(b,b+n);
	    if(is_sorted(a,a+n)) test = true;;
	    if(test){
	        cout<<"YES\n";
	        continue;
	    }
	    if(!test && x >= n){
	        cout<<"NO\n";
	        continue;
	    }
	    test = true;
	    for(int i=n-x; i<x; i++){
	        if(a[i] != b[i]) test = false;
	    }
	    if(!test) cout<<"NO\n";
	    else cout<<"YES\n";
	}
}