#include <iostream>
using namespace std;

main(){
	int r , c;
	cin >> r >> c;
	char arr[r][c];
	int doub[2][2];
	int pos[2];
	int temp[2];
	for(int i=0; i<r; i++){
		int count = 0;
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
			if(arr[i][j] == '*' && count == 0){
				temp[0] = i+1;
				temp[1] = j+1;
				count++;
			}
			else if(arr[i][j] == '*' && count == 1){
				doub[0][0] = temp[0];
				doub[0][1] = temp[1];
				doub[1][0] = i+1;
				doub[1][1] = j+1;
				count++;
			}
		}
		if(count == 1){
			pos[0] = temp[0];
			pos[1] = temp[1];
		}
	}
	cout<<pos[0]<<" ";
	if(pos[1] == doub[0][1]) cout<<doub[1][1];
	else cout<<doub[0][1];
	
}