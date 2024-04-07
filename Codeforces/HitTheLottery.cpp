#include <iostream>
using namespace std;
main(){
	int n;
	cin>> n;
	int total = 0;
		if(n >= 100){
			total = total + (n/100);
			n = n%100;
		}
		if(n >= 20){
			total = total + (n/20);
			n = n%20;
		}
		if(n >= 10){
			total = total + (n/10);
			n = n%10;
		}
		if(n >= 5){
			total = total + (n/5);
			n = n%5;
		}
		if(n < 5 ){
			total = total + n;
			n = 0;
		}
		cout<<total;
}