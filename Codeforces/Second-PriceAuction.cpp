#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n; 
	vector<int> arr(n);
	int max = 0;
	int index = -1;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] > max){
			max = arr[i];
			index = i+1;
		}
	}
	sort(arr.begin(),arr.end());
	cout<<index<<" "<<arr[n-2]<<"\n";
	
	
}