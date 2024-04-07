#include <iostream>
#include <iomanip>
using namespace std;

main(){
	int drinks;
	cin>>drinks;
	int loop = drinks;
	double fraction = 0;
	while(loop--){
		int drink;
		cin>>drink;
		fraction = fraction + drink;
	}
	fraction = fraction / drinks;
	cout<<fixed<<setprecision(12)<<fraction;
}