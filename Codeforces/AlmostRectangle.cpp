#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		char arr[n][n];
		int index[4];
		int count = -1;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>arr[i][j];
				if(arr[i][j] == '*'){
					count++;
					index[count] = i;
					count++;
					index[count] = j;
					
				}
			}
		}
		if(index[0] == index[2]){
			if(index[0] == 0){
				arr[index[0]+1][index[1]] = '*';
				arr[index[2]+1][index[3]] = '*';
			}
			else{
				arr[index[0]-1][index[1]] = '*';
				arr[index[2]-1][index[3]] = '*';
			}
		}
		if(index[1] == index[3]){
			if(index[1] == 0){
				arr[index[0]][index[1]+1] = '*';
				arr[index[2]][index[3]+1] = '*';
			}
			else{
				arr[index[0]][index[1]-1] = '*';
				arr[index[2]][index[3]-1] = '*';
			}
		}
		else{
			arr[index[0]][index[3]] = '*';
			arr[index[2]][index[1]] = '*';	
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
	}
}