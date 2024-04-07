#include<bits/stdc++.h>
using namespace std;

main(){
	int n, d;
	cin>> n >> d;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int count = 2;
	for(int i=0; i<n-1; i++){
		int def = abs(arr[i] - arr[i+1]);
		if(def > 2*d){
			int a = arr[i];
			while(abs(a - arr[i+1]) >= d){
				count++;
				a += d;
			}
		}
		
	}
	cout<<count<<"\n";
}