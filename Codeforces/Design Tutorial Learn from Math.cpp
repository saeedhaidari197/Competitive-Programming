#include <iostream>
using namespace std;

bool prime(int n) {
    bool isPrime = true;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

main(){
	int number;
	cin>> number;
	int num1,num2;
	if(number % 2 ==0){
		num1 = number/2;
		num2 = num1;
	}
	else{
		num1 = number/2;
		num2 = num1+1;
	}
	while(prime(num1) || prime(num2)){
		num1 = num1 -1;
		num2 = num2 +1;
	}
	cout<<num1<<" "<<num2;
}