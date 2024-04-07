#include <iostream>
using namespace std;
main(){
	long long num;
	cin>>num;
	
	if(num%2 == 0){
		num = num/2;
	}
	else num = ((num-1)/2) - num;
	cout<<num;
}