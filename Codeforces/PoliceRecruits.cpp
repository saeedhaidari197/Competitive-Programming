#include <iostream>
using namespace std;

main (){
	int num;
	cin >> num;
	int crime = 0;
	int police = 0;
	while(num--){
		int number;
		cin>> number;
		if(number > 0) police += number;
		else{
			if(police > 0) police -= 1;
			else crime++;
		}
	}
	cout<<crime;
}