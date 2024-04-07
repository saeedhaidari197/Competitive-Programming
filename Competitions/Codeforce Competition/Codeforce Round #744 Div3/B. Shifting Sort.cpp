#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		vector <long long> arr(n);
		for(int i=0; i<n; i++) cin>>arr[i];
		int count = 0;
		vector <int> res;
		for(int i=0; i<n; i++){
			int mi = i;
			for(int j=i+1; j<n; j++){
				if(arr[j] < arr[mi]){
					mi = j;
				}
			}
			if(mi == i) continue;
			else{
				res.push_back(i +1);
				res.push_back(mi +1);
				res.push_back((mi + 1) - (i + 1));
				long long temp = arr[mi];
				arr.erase(arr.begin()+mi);
				arr.insert(arr.begin()+i, temp);
				count++;
			} 
			
		}
		cout<<count<<"\n";
		for(int i=0; i<res.size(); i++){
			cout<<res[i]<<" ";
			i++;
			cout<<res[i]<<" ";
			i++;
			cout<<res[i]<<"\n";
		}
	}
}