#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int h , m;
		cin>> h >> m;
		int min = 60 - m;
		h++;
		int hour = 24 - h;
		hour *= 60;
		cout<<hour+min<<"\n";
	}
}