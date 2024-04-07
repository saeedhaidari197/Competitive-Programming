#include <bits/stdc++.h>
using namespace std;

main(){
	int n , k;
	cin>> n >> k;
	int arr[k];
	int max = 0;
	for(int i=0; i<k; i++) cin>>arr[i];
		sort(arr, arr+k);
		int dif = 10000;
		for(int i=0; i<k; i++){
			if(i+n-1 >= k)break;
			if(arr[i+n-1] - arr[i] < dif) dif = arr[i+n-1] - arr[i];
		}
		cout<<dif<<"\n";		
}