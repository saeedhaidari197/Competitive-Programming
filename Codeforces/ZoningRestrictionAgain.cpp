#include <bits/stdc++.h>
using namespace std;

main(){
	int spot, max, rest;
	cin>>spot >> max >> rest;
	int arr[spot+1];
	for(int i=1; i<=spot; i++) arr[i] = max;
	for(int i=0; i<rest; i++){
		int l , r , res;
		cin>>l >> r >> res;
		for(int j=l; j<=r; j++){
			if(arr[j] > res) arr[j] = res;
		}
	}
	int count = 0;
	for(int i=1; i<=spot; i++){
		count = count + (arr[i] * arr[i]);
	}
	cout<<count<<"\n";
}