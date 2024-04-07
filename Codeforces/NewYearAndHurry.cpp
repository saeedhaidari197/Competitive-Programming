#include <iostream>
using namespace std;

main(){
	int n , k;
	cin>> n >> k;
	int count = 0;
	while((k+(5*(count+1))) <= 240 && count < n){
		count++;
		k = k + (5*count);
	}
	cout<<count;
}