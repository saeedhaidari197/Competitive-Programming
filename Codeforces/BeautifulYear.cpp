#include <iostream>
#include <string>
using namespace std;
main(){
	string year;
	cin>> year;
	bool check = true;
	
	int arr[4] = {0};
	for(int i = 0; i<4; i++){
		arr[i] = arr[i] * 10 + (year[i] - 48);
	}
	
	// for incremention
	while(true){
		int distinct = 0;
		if(arr[3] == 9){
			if(arr[2] == 9){
				if(arr[1] == 9){
					arr[1] = 0;
					arr[0]++;
				}
				else arr[1]++;
				
				arr[2] = 0;
			}
			else arr[2]++;
			
			arr[3] = 0;
		}
		else arr[3]++;
		for(int i=0; i<3; i++){
			for(int e=i+1; e<4; e++){
				if(arr[i] == arr[e]) {
					distinct++;
					break;
				}
			}
			if(distinct > 0) break;
		}
		if(distinct == 0) break;
	}
	for(int i=0; i<4; i++){
		cout<<arr[i];
	}
}