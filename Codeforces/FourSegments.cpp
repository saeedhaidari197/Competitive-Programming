#include <bits/stdc++.h> 
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int arr[4];
		for(int i=0; i<4; i++) cin>>arr[i];
		sort(arr, arr+4);
		cout<<min(arr[0],arr[1]) * min(arr[2], arr[3])<<"\n";
	}
}