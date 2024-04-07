#include<iostream>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	bool possible = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j] == 1) continue;
			bool found = false;
			for(int x=0; x<n; x++){
				for(int y=0; y<n; y++){
					if(arr[i][j] == arr[i][x] +  arr[y][j]){
						found = true;
						break;
					}
				}
				if(found) break;
			}
			if(!found) possible = false;
		}
		if(!possible)break;
	}
	cout<<(possible ? "YES" : "NO")<<"\n";
}