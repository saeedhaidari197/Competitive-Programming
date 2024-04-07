#include <iostream>
using namespace std;
main(){
	int limok, bob , years = 0;
	cin>> limok >> bob;
	
	while(true){
		if(limok > bob)
		{
			break;
		}
		limok = limok *3;
		bob = bob*2;
		years++;
	}
	cout<<years;
}