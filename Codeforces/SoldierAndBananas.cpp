#include <iostream>
#include <string>
#include <cmath>
using namespace std;

main(){
	int price, money, amount;
	int total = 0;
	cin>> price >> money >> amount;
	
	for(int i=1; i<=amount; i++)
	{
		total = total + (price * i);
	}
	if(total <= money) cout<<0;
	else cout<<total - money;
	
	
}