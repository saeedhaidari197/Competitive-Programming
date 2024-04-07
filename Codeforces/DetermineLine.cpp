#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n; 
	int arr[101] = {0};
	int test = n;
	while(test--){
		int s; cin>>s;
		for(int i=0; i<s; i++){
			int num; cin>>num;
			arr[num] += 1;
		}
	}
	for(int i=0; i<101; i++){
		if(arr[i] == n) cout<<i<<" ";
	} cout<<"\n";
}