#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	vector <int> res;
	cin>>arr[0];
	for(int i=1; i<n; i++){
		cin>>arr[i];
		if(arr[i-1] >= arr[i]) res.push_back(arr[i-1]);
	}
	res.push_back(arr[n-1]);
	cout<<res.size()<<"\n";
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}
}