#include<bits/stdc++.h>
using namespace std;

main(){
	int n, m;
	cin>>n >>m;
	char arr[n][m];
	bool possible = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
			if(arr[i][j] == '.') arr[i][j] = 'D';
		}
	} 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] == 'S'){
				if(i != 0){
					if(arr[i-1][j] == 'W'){
						possible = false;
						break;
					}
				}
				if(i != n-1){
					if(arr[i+1][j] == 'W'){
						possible = false;
						break;
					}
				}
				if(j != 0){
					if(arr[i][j-1] == 'W'){
						possible = false;
						break;
					}
				}
				if(j != m-1){
					if(arr[i][j+1] == 'W'){
						possible = false;
						break;
					}
				}
			}
		}
		if(!possible) break;
	}
	if(possible){
		cout<<"YES\n";
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
	}
	else cout<<"NO\n";
	

}