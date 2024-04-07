#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector<pair<int,int>> arr;
	for(int i=1; i<=n; i++){
		int num; cin>>num;
		arr.push_back(make_pair(num,i));
	}
	sort(arr.begin(), arr.end());
	for(int i=0; i<n/2; i++){
		cout<<arr[i].second<<" "<<arr[n-i-1].second<<"\n";
	}
}