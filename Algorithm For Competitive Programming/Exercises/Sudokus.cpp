#include<bits/stdc++.h>
using namespace std;
#define N 9

void output(int grid[N][N]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<"\n";
	}
}

bool isSafe(int grid[N][N], int row, int col, int num){
	for(int i=0; i<9; i++){
		if(grid[row][i] == num) return false;
		if(grid[i][col] == num) return false;
	}
	
	int matRow = row - row%3, matCol = col - col%3;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(grid[i+matRow][j+matCol] == num) return false;
		}
	}
	
	return true;
}

bool solveSudoku(int grid[N][N], int row , int col){
	//if we reach the last we are finished then
	if(row == N-1 && col == N) return true;
	//if we reach at end col
	if(col == N){
		row++;
		col = 0;
	}
	//if the cell is already fill
	if(grid[row][col] > 0) return solveSudoku(grid , row, col+1);
	
	for(int num = 1; num <= N; num++){
		if(isSafe(grid, row, col, num)){
			grid[row][col] = num;
		
		if(solveSudoku(grid,row, col+1)) return true;
		}
		
		grid[row][col] = 0;
	}
	return false;
}
int main(){
	int grid[N][N] = {  {3, 0, 6, 5, 0, 8, 4, 0, 0},
						{5, 2, 0, 0, 0, 0, 0, 0, 0},
						{0, 8, 7, 0, 0, 0, 0, 3, 1},
						{0, 0, 3, 0, 1, 0, 0, 8, 0},
						{9, 0, 0, 8, 6, 3, 0, 0, 5},
						{0, 5, 0, 0, 9, 0, 6, 0, 0},
						{1, 3, 0, 0, 0, 0, 2, 5, 0},
						{0, 0, 0, 0, 0, 0, 0, 7, 4},
						{0, 0, 5, 2, 0, 6, 3, 0, 0,} };
	//FOR User Input
//	for(int i=0; i<N; i++){
//		for(int j=0; j<N; j++){
//			cin>>grid[i][j];
//		}
//	}
	if(solveSudoku(grid, 0 , 0)){
		output(grid);
	}
	else{
		cout<<"No Solution Available!"<<"\n";
	}
	return 0;
}