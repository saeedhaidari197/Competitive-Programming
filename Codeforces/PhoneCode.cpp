#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	string arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int count = 0;
	bool found = false;
	int size = arr[0].size();
	for(int i=0; i<size; i++){
		char ch = arr[0][i];
		for(int j=1; j<n; j++){
			if(arr[j][i] != ch){
				found = true;
				break;
			}
		}
		if(found){
			break;
		}
		count++;
	}
	cout<<count<<"\n";
	
}