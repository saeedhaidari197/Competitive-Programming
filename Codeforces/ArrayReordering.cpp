#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		vector <int> odd, even;
		vector<int> arr;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num%2==0) even.push_back(num);
			else odd.push_back(num);
		}
		for(auto i : even) arr.push_back(i);
		for(auto i : odd) arr.push_back(i);
		int count = 0;
		for(int i=0; i<n-1; i++){
			for(int x=i+1; x<n; x++){
				if(__gcd(arr[i], arr[x]*2) > 1) count++;
			}
		}
		cout<<count<<"\n";
	}
}