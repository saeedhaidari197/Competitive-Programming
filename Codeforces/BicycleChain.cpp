#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	int m; cin>>m;
	int ar[m];
	for(int i=0; i<m; i++) cin>>ar[i];
	
	vector<int> res;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(ar[i] % arr[j] == 0){
				res.push_back(ar[i]/arr[j]);
			}
		}
	}
	sort(res.begin(), res.end());
	int ans = 0;
	int max = res[res.size()-1];
	for(int i=res.size(); i>=0; i--){
		if(res[i] == max) ans++;
	}
	cout<<ans<<"\n";
	
	return 0;
}