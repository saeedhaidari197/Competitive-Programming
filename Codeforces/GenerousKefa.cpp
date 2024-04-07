#include<bits/stdc++.h>
using namespace std;

main(){
	int n, k;
	cin>> n >> k;
	char arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	char s = '.';
	int count = 0;
	bool possible = true;
	for(int i=0; i<n; i++){
		if(s != arr[i]){
			s = arr[i];
			count = 0;
		}
		while(s == arr[i] && i < n){
			count++;
			i++;
		}
		if(count > k){
			possible = false;
			break;
		}
		i--;
	}
	cout<<(possible ? "YES\n" : "NO\n");
}