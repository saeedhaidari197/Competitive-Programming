#include <iostream>
using namespace std;

main(){
	int n, h;
	int width = 0  , person;
	cin>> n >> h;
	while(n--){
		cin>>person;
		if(person > h) width += 2;
		else width++;
	}
	cout<<width;
}