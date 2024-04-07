#include <iostream>
#include <math.h>
using namespace std;

main(){
	int test;
	cin>> test;
	while(test--){
		int a , b;
		cin>> a >> b;
		int dif;
		dif = abs(a-b);
		if(dif == 0) cout<<"0"<<"\n";
		else if(dif <= 10) cout<<1<<"\n";
		else{
			int count ;
			count = (dif/10);
			if(dif%10 != 0) count++;
			cout<<count<<"\n";
		}
	}
}