#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		int n, x;
    	cin>>n >> x;
    	bool achieve[201];
    	for(int i = 1; i <= n + x; i++) {
    	    achieve[i] = false;
    	}
    	for(int i = 1; i <= n; i++) {
    	    int ranking;
    	    cin>>ranking;
    	    achieve[ranking] = true;
    	}
    	for(int k = n + x; k > 0; k--) {
    	    int v = 0;
    	    for(int i = 1; i <= k; i++) {
    	        if(!achieve[i]) v++;
    	    }
    	    if(v <= x) {
    	        cout<<k<<"\n";
    	        break;
    	    }
    }
	}
}

    
