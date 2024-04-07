#include <iostream>
#include <string>
using namespace std;
main(){
	int x = 0;
	int operations;
	cin>>operations;
	string opt;
	
	while(operations--)
	{
		cin>>opt;
		if(opt[0] == '+' || opt[2] == '+' )    x += 1;
		if(opt[0] == '-' || opt[2] == '-' )    x -= 1;
	}
	cout<<x;
}