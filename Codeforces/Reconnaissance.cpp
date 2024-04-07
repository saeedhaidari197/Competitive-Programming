#include<bits/stdc++.h>
using namespace std;

main(){
	int n , d;
	cin>> n >> d;
	int arr[n];
	int count = 0;
	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j == i) continue;
			int dif = abs(arr[i] - arr[j]);
			if(dif <= d) count++;
		}
	}
	cout<<count<<"\n";
}