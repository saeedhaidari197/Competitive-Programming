#include <iostream>
using namespace std;

main(){
	int contesters, pass, next = 0, score;
	cin>> contesters >> pass;
	int arr[contesters];
	for(int i = 0; i<contesters; i++)
	{
		pass--;
		cin>>arr[i];
		if(pass == 0){
			score = arr[i];
		}	
	}
	for(int i=0; i<contesters; i++){
		if(arr[i] == 0) break;
		else if(arr[i] < score){
			break;
		}
		else next++;
	}
	cout<<next;
}