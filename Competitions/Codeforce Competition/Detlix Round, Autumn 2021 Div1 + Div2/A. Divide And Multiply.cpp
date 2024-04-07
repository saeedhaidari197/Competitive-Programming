#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n+1];
		arr[0] = 0;
		int count = 0;
		for(int i=1; i<=n; i++){
			cin>>arr[i];
			if(arr[i]%2 == 0){
				while(true){
					arr[i] = arr[i]/2;
					count++;
					if(arr[i]%2 != 0) break;
				}
			}
		}
		unsigned long long res = 0;
		sort(arr,arr + n+1);
		res = arr[n];
		while(count--) res *= 2;
		for(int i=1; i<n; i++){
			res += arr[i];
		}
		cout<<res<<"\n";
	}
}