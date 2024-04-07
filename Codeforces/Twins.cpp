#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	int sum = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n, greater<int>());
	int coin = 0;
	int cost = 0;
	for(int i=0; i<n; i++){
		cost += arr[i];
		coin++;
		if(cost > sum-cost) break;
	}
	cout<<coin<<"\n";
}