#include<iostream>
#include<algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int arr[3];
		for(int i=0; i<3; i++) cin>>arr[i];
		sort(arr, arr+3);
		if(arr[0] == arr[1] && arr[2] % 2 == 0) cout<<"YES\n";
		else if(arr[1] == arr[2] && arr[0] % 2 == 0) cout<<"YES\n";
		else if(arr[2] - arr[1] == arr[0]) cout<<"YES\n";
		else cout<<"NO\n";
	}
}