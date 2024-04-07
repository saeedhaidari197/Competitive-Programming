#include<iostream>
using namespace std;

main(){
	int number , subs;
	cin>> number >> subs;
	while(subs--){
		if(number % 10 == 0)
		{
			number = number / 10;
		}
		else number--;
	}
	cout<<number;
}