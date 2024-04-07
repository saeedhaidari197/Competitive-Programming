#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	char arr[n][n];
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
			if(arr[i][j] == '.') count++;
		}
	}
	if(count%5 != 0) cout<<"NO\n";
	else{
		bool possible = true;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j] == '.'){
					if(j==0){
						possible = false;
						break;
					}
					else if(j == (n-1)){
						possible = false;
						break;
					}
					else{
						if(arr[i+1][j] == '.' && arr[i+2][j] == '.' && arr[i+1][j+1] == '.' && arr[i+1][j-1] == '.'){
							arr[i][j] = '#';
							arr[i+1][j] = '#';
							arr[i+2][j] = '#';
							arr[i+1][j+1] = '#';
							arr[i+1][j-1] = '#';
						}
						else{
							possible = false;
							break;
						}
					}
				}
			}
			if(!possible)break;
		}
		cout<<(possible ? "YES\n" : "NO\n");
	}
	return 0;
}