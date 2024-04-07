#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int count = 0;
	if( n > 1){
		for(int i=0; i<n; i++){
			if(arr[i] != 0){
				if(arr[i] == arr[i+1] && arr[i] != arr[i+2]){
					count++;
					i++;
				}
				else if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
					count = -1;
					break;
				}
			}		
		}
	}
	cout<<count<<"\n";
}