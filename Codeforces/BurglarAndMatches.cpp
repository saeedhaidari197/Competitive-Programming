#include<bits/stdc++.h>
using namespace std;

main(){
	int m , n;
	cin>>m >> n;
	vector <pair<int,int>> arr;
	for(int i=0; i<n; i++){
		int box; cin>>box;
		int mat; cin>>mat;
		arr.push_back(make_pair(mat,box));
	}
	sort(arr.begin(),arr.end(), greater<>());
	int sum = 0;
	int i = 0;
	while(m > 0 && i < arr.size()){
		if(arr[i].second <= m){
			sum = sum + (arr[i].first * arr[i].second);
			m = m - arr[i].second;
		}
		else{
			sum = sum + (arr[i].first * m);
			break;
		}
		i++;
	}
	cout<<sum<<"\n";
}