#include <bits/stdc++.h>
using namespace std;

main(){
	int k; cin>>k;
	int arr[12];
	for(int i=0; i<12; i++) cin>>arr[i];
	sort(arr,arr+12);
	int high = 0;
	int count = 0;
	for(int i=11; i>=0; i--){
		if(high >= k)break;
		else{
			high += arr[i];
			count++;
		}
	}
	if(high >= k) cout<<count<<"\n";
	else cout<<-1<<"\n";
}