#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int o=0 , t=0;
		char arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] == '1') o++;
			else t++;
		}
		if(t <= 2 && t > 0) cout<<"NO\n";
		else{
			char res[n][n] = {'0'};
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					if( j == i){
						res[i][j] = 'X';
					}
					else if(arr[i] == '1' && arr[j] == '1') res[i][j] = '=';
					else if(arr[i] == '2' && arr[j] == '1') res[i][j] = '-';
					else if(arr[i] == '1' && arr[j] == '2') res[i][j] = '+';
					else if(arr[i] == '2' && arr[j] == '2'){
						if(res[i][j] != '-' && res[i][j] != '+'){
							bool none = true;
							for(int x = 0; x<n; x++){
							if(res[i][x] == '+'){
								none = false;
								break;
								}
							}
							if(none){
								res[i][j] = '+';
								res[j][i] = '-';
							}
							else{
								res[i][j] = '-';
								res[j][i] = '+';
							}
						}
					}
				}
			}
			cout<<"YES\n";
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					cout<<res[i][j];
				}
				cout<<"\n";
			}
		}
	}
}