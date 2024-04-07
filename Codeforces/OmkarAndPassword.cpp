#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		set <int> s;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			s.insert(arr[i]);
		}
		if(s.size() == 1) cout<<n<<"\n";
		else cout<<1<<"\n";
		
	}
}