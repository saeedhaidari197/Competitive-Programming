#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n+1];
	for(int i=1; i<=n; i++) cin>>arr[i];
	bool found = false;
	for(int i=1; i<=n; i++){
		int b = arr[i];
		int c = arr[b];
		if(i == arr[c]){
			found = true;
			break;
		}
	}
	cout<<(found ? "YES\n" : "NO\n");
}