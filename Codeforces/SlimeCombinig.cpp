#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector <int> arr;
	while(n > 0){
		int num = n % 2;
		arr.push_back(num);
		n = n/2;
	}
	for(int i= arr.size()-1; i>=0; i--){
		if(arr[i] == 1)cout<<i+1<<" ";
	}
}