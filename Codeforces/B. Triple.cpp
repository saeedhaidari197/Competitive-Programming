#include<iostream>
#include<algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		int res = -1;
		for(int i=0; i<n; i++) cin>>arr[i];
		if(n < 3) cout<<res<<"\n";
		else{
			sort(arr, arr+n);
			for(int i=0; i<n-2; i++){
				if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
					res = arr[i];
					break;
				}
			}
			cout<<res<<"\n";
		}
		
	}
}