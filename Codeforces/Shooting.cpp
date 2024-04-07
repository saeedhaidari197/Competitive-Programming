#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector <pair<int,int>> arr;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		int pos = i+1;
		arr.push_back(make_pair(num,pos));
	}
	sort(arr.begin(), arr.end());
	int count = 0;
	int sum = 0;
	for(int i=arr.size()-1; i>=0; i--){
		sum = sum + ((arr[i].first * count)+ 1);
		count++;
	}
	cout<<sum<<"\n";
	for(int i=arr.size()-1; i>=0; i--) cout<<arr[i].second<<" ";
	cout<<"\n";
}