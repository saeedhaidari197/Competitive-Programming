#include <bits/stdc++.h>
using namespace std;

main(){
	int arr[4];
	int sum = 0;
	for(int i=0; i<4; i++){
		cin>>arr[i];
		sum += arr[i];
	}
	if(sum%2 != 0){
		cout<<"NO"<<"\n";
	}
	else{
		sum /= 2;
		if(arr[0] + arr[1] == sum && arr[2] + arr[3] == sum) cout<<"YES"<<"\n";
		else if(arr[0] + arr[3] == sum && arr[1] + arr[2] == sum) cout<<"YES"<<"\n";
		else if(arr[0] + arr[2] == sum && arr[1] + arr[3] == sum) cout<<"YES"<<"\n";
		else if(arr[0] == sum || arr[1] == sum || arr[2] == sum || arr[3] == sum) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}