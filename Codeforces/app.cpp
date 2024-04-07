#include <iostream>
#include<list>
#include <vector>
using namespace std;

int main(){
	int arr[100][100];
	int c; 
	cin>> c;
	for(int i = 0; i < c; i++){
		for(int x = 0; x<2; x++){
			cin>>arr[i][x];
		}
	}
	for (int i =0 ; i< c; i++){
			for(int x =0; x<2 ; x++){
		cout << arr[i][x]<<" ";
			}cout << endl;
	}
	return 0;
	
}
