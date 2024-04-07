#include<bits/stdc++.h>
using namespace std;

main(){
	int arr[10] = {0};
	int n; cin>>n;
	for(int j=0; j<n; j++){
		char c; cin>>c;
		if(c == 'L'){
			for(int i=0; i<10; i++){
				if(arr[i] == 0){
					arr[i] = 1;
					break;
				}
			}
		}
		else if(c == 'R'){
			for(int i=9; i>=0; i--){
				if(arr[i] == 0){
					arr[i] = 1;
					break;
				}
			}
		}
		else{
			int num = c - 48;
			arr[num] = 0;
		}
	}
	for(int i=0; i<10; i++) cout<<arr[i];
	cout<<"\n";
}