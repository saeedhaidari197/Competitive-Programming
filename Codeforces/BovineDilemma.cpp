#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		set<int> s;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				int r = arr[j] - arr[i];
				s.insert(r);
			}
		}
		cout<<s.size()<<"\n";
	}
}