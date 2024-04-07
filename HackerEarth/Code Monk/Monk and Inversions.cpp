#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n][n];
		int count = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>arr[i][j];
				bool found = false;
				for(int x=i; x>=0; x--){
					for(int y=j; y>=0; y--){
						if(arr[i][j] < arr[x][y]){
							count++;
							found = true;
							break;
						}
					}
					if(found) break;
				}
			}
		}
		cout<<count<<"\n";
	}
}