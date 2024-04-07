#include<iostream>
#include<algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		long long arr[n];
		long long sum = 0;
		long long min = 1000000;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr, arr + n);
		min = arr[0];
		for(int i=0; i<n; i++){
			sum += (arr[i] - min);
		}
		cout<<sum<<"\n";
	}
}