#include <iostream>
using namespace std;

main(){
	int n , m;
	cin>> n >> m;
	int total  = n;
	while(n/m > 0){
		total += n/m;
		n = n/m + n%m;
	}
	cout<<total<<"\n";
}