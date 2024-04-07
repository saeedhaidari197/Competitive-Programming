#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n+1];
	for(int i=1; i<=n; i++) cin>>arr[i];
	int f , t;
	cin>> f >> t;
	int frwd = 0 , back = 0;
	int frnt = f , end = t;
	while(true){
		if(frnt == end) break;
		frwd += arr[frnt];
		if(frnt == n) frnt = 1;
		else frnt++;
	}
	frnt = f; end = t;
	while(true){
		if(frnt == end) break;
		if(frnt == 1) frnt = n;
		else frnt--;
		back += arr[frnt];
	}
	cout<<min(frwd , back)<<"\n";
} 