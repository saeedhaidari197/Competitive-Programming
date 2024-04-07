#include <iostream>
using namespace std;

main(){
	int a , b;
	cin >> a >>b;
	int style = 0;
	int normal = 0;
	
	if(a > b){
		style = b;
		normal = (a-b)/2;
	}
	else if(b > a){
		style = a;
		normal = (b-a)/2;
	}
	else style = a;
	
	cout<<style<<" "<<normal;
}