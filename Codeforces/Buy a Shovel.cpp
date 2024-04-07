#include <iostream>
using namespace std;

main(){
	int k , r;
	cin>> k >> r;
	int i = 1;
	while(true){
		int sum = k*i;
		if(sum%10 == 0 || sum%10 == r){
			break;
		}
		i++;
	}
	cout<<i;
}