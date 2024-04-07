#include <iostream>
using namespace std;
 
main(){
	int matrix[5][5];
	int position[2];
	int moves = 0;
	
	for(int i=0; i<5; i++){
		for(int e=0; e<5; e++){
			cin>>matrix[i][e];
			if(matrix[i][e] == 1)
			{
				position[0] = i;
				position[1] = e;
			}
		}
	}
	while(position[0] !=2){
		if(position[0] > 2) position[0]--;
		if(position[0] < 2) position[0]++;
		moves++;
	}
	while(position[1] !=2){
		if(position[1] > 2) position[1]--;
		if(position[1] < 2) position[1]++;
		moves++;
	}
	cout<<moves;
	
}