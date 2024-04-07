#include<bits/stdc++.h>
using namespace std;

main(){
	int n, m;
	cin>>n >> m;
	char arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin>>arr[i][j];
	}
	int possible = true;
	char back = '-';
	for(int i=0; i<n; i++){
		char s = arr[i][0];
		if(s == back) possible = false;
		for(int j=0; j<m; j++){
			if(!possible) break;
			if(arr[i][j] != s) possible = false;
		}
		if(!possible) break;
		back = arr[i][0];
	}
	cout<<(possible ? "YES\n" : "NO\n");
}