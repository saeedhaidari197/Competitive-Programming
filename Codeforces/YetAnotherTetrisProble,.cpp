#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		int min = 100;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] < min) min = arr[i];
		}
		bool possible = true;
		for(int i=0; i<n; i++){
			arr[i] -= min;
			if(arr[i]%2 == 1){
				possible = false;
				break;
			}
		}
		if(possible) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}