#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int arr[3];
		for(int i=0; i<3; i++){
			int num; cin>>num;
			if(num > 4) arr[i] = 4;
			else arr[i] = num;
		}
		sort(arr, arr+3);
		int count = 0;
		for(int i=0; i<3; i++) if(arr[i] >= 1) count++ , arr[i]--;
		if(arr[2] > 0 && arr[1] > 0) count++ , arr[1]-- , arr[2]--;
		if(arr[2] > 0 && arr[0] > 0) count++ , arr[0]-- , arr[2]--;
		if(arr[1] > 0 && arr[0] > 0) count++ , arr[0]-- , arr[1]--;
		if(arr[2] > 0 && arr[1] > 0 && arr[0] > 0) count++;
		cout<<count<<"\n"; 
	}
}