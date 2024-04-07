#include<bits/stdc++.h>
using namespace std;

main(){
	int n, k;
	cin >> n >> k;
	deque <int> arr;
	for(int i=0; i<n; i++){
		int num; cin>>num; arr.push_back(num);
	}
	int count = 0;
	while(arr.size() > 0){
		if(arr[0] <=k ){
			arr.pop_front();
			count++;
		}
		else if(arr[arr.size()-1] <= k){
			arr.pop_back();
			count++;
		}
		else break;
	}
	cout<<count<<"\n";
}