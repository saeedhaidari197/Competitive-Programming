#include <bits/stdc++.h>
using namespace std;

main(){
	long long n , b , d;
	cin>> n >> b >> d;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int jui_size = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		if(arr[i] > b) continue;
		jui_size += arr[i];
		if(jui_size > d){
			jui_size = 0;
			count++;
		}
	}
	cout<<count<<"\n";
}