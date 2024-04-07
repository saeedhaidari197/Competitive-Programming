#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		vector <int> arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		vector <int> ar;
		while(true){
			ar.erase(ar.begin(), ar.end());
			sort(arr.begin(), arr.end());
			cout<<arr[0]<<" ";
			for(int i=1; i<arr.size(); i++){
				if(arr[i] != arr[i-1]) cout<<arr[i]<<" ";
				else ar.push_back(arr[i]);
			}
			if(ar.size() == 0) break;
			else{
				arr.erase(arr.begin(), arr.end());
				for(int i=0; i<ar.size(); i++){
					arr.push_back(ar[i]);
				}
			}
		}
		cout<<"\n";
	}
}