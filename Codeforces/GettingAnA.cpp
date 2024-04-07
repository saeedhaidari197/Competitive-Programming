#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	double sum = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n);
	int count = 0;
	int i=0;
	double div = sum/n;
	while(true){
		if(div >= 4.5) break;
		int dif = abs(arr[i] - 5);
		sum += dif;
		count++;
		i++;
		div = sum/n;
	}
	cout<<count<<"\n";
	
}