#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int d1 , d2 , d3;
	cin >> d1 >> d2 >> d3;
	int sum = 0;
	if(d1 < d2){
		sum += d1;
		sum += min(min(d1+(2*d2), d3+d2),d1+(2*d3));
	}
	else{
		sum += d2;
		sum += min(min(d2+(2*d1), d3+d1),d2+(2*d3));
	}
	cout<<sum;
}