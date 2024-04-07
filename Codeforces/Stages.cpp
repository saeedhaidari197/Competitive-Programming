#include<bits/stdc++.h>
using namespace std;

main(){
	int n, k;
	cin>>n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		char s; cin>>s;
		arr[i] = int(s) - 96;
	}
	sort(arr, arr+n);
	int sum = arr[0];
	int num = arr[0];
	k--;
	for(int i=1; i<n; i++){
		if(k == 0) break;
		if(arr[i] - num <= 1) continue;
		else{
			sum += arr[i];
			num = arr[i];
			k--;
		}
	}
	if(k > 0) cout<<-1<<"\n";
	else cout<<sum<<"\n";
}