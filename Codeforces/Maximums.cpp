#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	long long arr[n];
	long long sum = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		cout<<sum+arr[i]<<" ";
		if(arr[i] > 0) sum += arr[i];
	}
}