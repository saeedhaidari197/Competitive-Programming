#include <iostream>
using namespace std;

main(){
	int test;
	cin>> test;
	while(test--){
		int candies;
		cin>> candies;
		if(candies == 1 || candies == 2) cout<<0<<"\n";
		else {
			if(candies % 2 == 0){
				cout<<candies/2-1<<"\n";
			}
			else{
				candies++;
				cout<<candies/2-1<<"\n";
			}
		}
	}
}