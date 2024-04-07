#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector <int> nums(n);
	for(int i=0; i<n; i++) cin>>nums[i];
	sort(nums.begin(), nums.end());
	int ans = 0;
	ans = nums[n-1] - 25;
	cout<<max(0, ans)<<"\n";
}