#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr+3);
		long long rem = arr[1] - arr[0];
		arr[2] = arr[2] - rem;
		if(arr[2] > 0) cout<<arr[1] + arr[2]/2<<"\n";
		else cout<<arr[1]<<"\n";
	}
}