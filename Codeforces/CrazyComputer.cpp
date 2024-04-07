#include <bits/stdc++.h>
using namespace std;

main(){
	int n, c;
	cin>> n >> c;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	if(n == 1) cout<<1<<"\n";
	else{
		int res = 0;
		for(int i=0; i<n-1; i++){
			if(arr[i+1] - arr[i] <= c){
				if(res == 0) res += 2;
				else res++;
			}
			else res = 1;
		}
		cout<<res<<"\n";
	}	
}