#include <iostream>
using namespace std;

main()
{
	int distance;
	cin>> distance;
	
	if(distance % 5 == 0) cout<<distance/5;
	else cout<<(distance / 5) + 1;
}