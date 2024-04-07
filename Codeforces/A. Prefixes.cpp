#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	char arr[n+1];
	for(int i=1; i<=n; i++) cin>>arr[i];
	int count = 0;
	for(int i=1; i<=n/2; i++){
		if(arr[2*i - 1] == arr[2*i]){
			if(arr[2*i] == 'a') arr[2*i] = 'b';
			else arr[2*i] = 'a';
			count++;
		}
	}
	cout<<count<<"\n";
	for(int i=1; i<=n; i++) cout<<arr[i];
}