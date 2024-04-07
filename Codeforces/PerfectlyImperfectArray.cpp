#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		bool found = false;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(!found){
				double m = sqrt(arr[i]);
				int i = m;
				if(ceil(m) != i) found = true;
			}
		}
		if(found) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}