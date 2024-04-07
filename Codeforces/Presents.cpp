#include<iostream>
using namespace std;

main(){
	int number;
	cin>>number;
	int given[number];
	int recieve[number] = {0}; 
	
	for(int i=0; i<number; i++){
		cin>>given[i];
		recieve[given[i]-1] = i+1;
	}
	for(int i=0; i<number; i++){
		cout<<recieve[i]<<" ";
	}
	
}