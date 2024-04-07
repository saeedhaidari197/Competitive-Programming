#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	int res = 90;
	if(arr[0] > 15) res = 15;
	else{
		for(int i=0; i<n-1; i++){
			if(arr[i] + 15 < arr[i+1]){
				res = arr[i]+15;
				break;
			}
		}
	}
	if( res == 90){
		if(arr[n-1] + 15 < 90) res = arr[n-1] + 15;
	}
	cout<<res<<"\n";
	return 0;
}