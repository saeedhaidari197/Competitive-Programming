#include <iostream>
#include <cmath>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int num;
		cin>>num;
		long long sum1 = 0, sum2 = 0;
		for(int i=1; i<num/2; i++){
			sum1 += pow(2,i);
		}
		sum1 += pow(2,num);
		for(int i=num/2; i<num; i++){
			sum2 += pow(2,i);
		}
		cout<< abs(sum1 - sum2) <<"\n";
	}
}