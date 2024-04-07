#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , x;
		cin>> n >> x;
		int arr[n];
		int sum = 0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum == x) cout<<"NO"<<"\n";
		else{
			cout<<"YES"<<"\n";
			sum = 0;
			for(int i=0; i<n; i++){
				sum += arr[i];
				if(sum == x){
					cout<<arr[i+1]<<" ";
					cout<<arr[i]<<" ";
					i++;
				}
				else{
					cout<<arr[i]<<" ";
				}
			}
			cout<<"\n";	
		}
	}
}