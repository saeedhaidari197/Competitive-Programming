#include<bits/stdc++.h>
using namespace std;

main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n==1 ){
			int num; cin>>num;
			cout<<num<<"\n";
		}
		else{
			int arr[n];
			for(int i=0; i<n; i++) cin>>arr[i];
			sort(arr, arr+n);
			int pos = 0;
			int neg = 0;
			long long max = -1000000000;
			for(int i=0; i<n; i++){
					arr[i] = arr[i] - neg;
					arr[i] = arr[i] - pos;
				if(arr[i] < 0) neg += arr[i];
				else pos += arr[i];
				if(arr[i] > max) max = arr[i];
			}
			cout<<max<<"\n";
		}			 
	}
} 