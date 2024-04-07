#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int ar[n];
	set <int> s;
	vector <int> ans;
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	for(int i=n-1; i>=0; i--){
		if(s.find(ar[i]) == s.end()){
			ans.push_back(ar[i]);
			s.insert(ar[i]);
		}
	}
	cout<<s.size()<<"\n";
	for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
}