#include <iostream>
#include <algorithm>
//#include <cmath>
#include <math.h>
using namespace std;
main(){
	int test; cin>>test;
	while(test--){
		int num;cin>>num;
		int res;
		int digits = (int)log10(num);
		int first = num/pow(10,digits);
		if(digits == 3) res = first*10;
		else if(digits == 2) res = first*10 -4;
		else if(digits == 1) res = first*10 -7;
		else res = first*10 -9;
		
		cout<<res<<"\n";
		
	}
}