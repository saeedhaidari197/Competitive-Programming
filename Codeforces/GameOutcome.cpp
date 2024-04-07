#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int row[n] = {0};
	int col[n] = {0};
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
			col[j] += arr[i][j];
			row[i] += arr[i][j];
		}
	}
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(col[j] > row[i]) count++;
		}
	}
	cout<<count<<"\n";
}