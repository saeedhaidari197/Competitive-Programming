//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	int test; cin>>test;
//	while(test--){
//		int n; cin>>n;
//		int arr[n];
//		for(int i=0; i<n; i++){
//			cin>>arr[i];
//		}
//		vector <int> res;
//		int max = 
//		for(int i=0; i<n; i++){
//			if(arr[i] > 0){
//				for(int j=i+1; j<n; j++){
//					if(arr[j] > 0){
//						int num = abs(arr[i] - arr[j]);
//						int time = min(arr[i],arr[j]);
//						while(time--){
//							res.push_back(i+1);
//							res.push_back(j+1);
//						}
//						if(arr[i] > arr[j]){
//							arr[j] = 0;
//							arr[i] = num;
//						}
//						else if(arr[j] > arr[i]){
//							arr[j] = num;
//							arr[i] = 0;
//						}
//						else{
//							arr[i] = 0;
//							arr[j] = 0;
//						}
//					}
//					if(arr[i] <= 0) break;
//				}
//			}
//		}
//		cout<<res.size()/2<<"\n";
//		for(int i=0; i<res.size(); i++){
//			cout<<res[i]<<" "<<res[i+1]<<"\n";
//			i++;
//		}
//	}
//}
//Copied
#include <bits/stdc++.h>
#define c first
#define i second
using namespace std;
int main() {
	int t,n,k;
	cin.tie(0),cout.tie(0),ios::sync_with_stdio(false);
	cin>>t;
	while(t--) {
		cin>>n;
		priority_queue<pair<int,int>> pq;
		vector<pair<int,int>> ans;
		for(int i=1;i<=n;i++) {
			cin>>k;
			if(k>0) pq.push({k,i});
		}
		while(pq.size()>1) {
			int c=pq.top().c,i=pq.top().i;
			pq.pop();
			int c2=pq.top().c,i2=pq.top().i;
			pq.pop();
			if(c>0) --c;
			if(c2>0) --c2;
			if(c>0) pq.push({c,i});
			if(c2>0) pq.push({c2,i2});
			if(i>i2) swap(i,i2);
			ans.push_back({i,i2});
		}
		cout<<ans.size()<<"\n";
		for(auto i:ans) cout<<i.c<<" "<<i.i<<"\n";
	}
}