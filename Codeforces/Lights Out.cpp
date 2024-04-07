#include<bits/stdc++.h>
using namespace std;

main(){
	int arr[3][3];
	int res[3][3] = {0};
	for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin>>arr[i][j];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int sum = arr[i][j];
			int rb = i-1 , rf = i+1 , cb = j-1 , cf = j+1;
			if(rb >= 0) sum += arr[rb][j];
			if(rf < 3) sum += arr[rf][j];
			if(cb >=0) sum += arr[i][cb];
			if(cf < 3) sum += arr[i][cf];
			if(sum % 2 == 1) res[i][j] = 0;
			else res[i][j] = 1;
		}
	}
	for(int i=0; i<3; i++){
		 for(int j=0; j<3; j++){
		 	cout<<res[i][j];
		 }
		 cout<<"\n";
	}
}