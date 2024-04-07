#include<bits/stdc++.h>
using namespace std;

main(){
	long long n; cin>>n;
	long long a[n], b[n];
	vector <pair<long long , long long>> arr;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++){
		cin>>b[i];
		arr.push_back(make_pair(b[i], a[i]));
	}
	sort(arr.begin(), arr.end(), greater<>());
	long long empty = abs(arr[0].first - arr[0].second) + abs(arr[1].first - arr[1].second);
	long long sum = 0;
	for(int i=2; i<n; i++) sum += arr[i].second;
	if(empty >= sum) cout<<"YES\n";
	else cout<<"NO\n";
}