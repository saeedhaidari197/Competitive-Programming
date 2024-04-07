#include <iostream>
#include <string>
using namespace std;
 
main(){
	int total = 0;
	int n;
	cin>> n;
	while(n--){
		string s;
		cin>>s;
		if(s[0] == 'T') total += 4;
		else if(s[0] == 'C') total +=6;
		else if(s[0] == 'O') total +=8;
		else if(s[0] == 'D') total +=12;
		else total += 20;
	}
	cout<<total;
} 		