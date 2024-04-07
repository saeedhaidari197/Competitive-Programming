#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int getSum(int num){
	int sum = 0;
	while (num != 0){
		sum = sum + num%10;
		num = num/10;
	}
	return sum;
}

main(){
	int num;
	cin>>num;
	while(getSum(num)%4 != 0){
		num++;
	}
	cout<<num<<"\n";
}