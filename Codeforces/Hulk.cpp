#include <iostream>
using namespace std;

main(){
	int num;
	cin>> num;
	
	if(num == 1) cout<<"I hate it";
	else {
		for(int i=0; i<num-1; i++){
			cout<<"I hate that ";
			i++;
			if(i == num - 1) break;
			else cout<<"I love that ";
		}
		if(num%2 == 0){
			cout<<"I love it";
		}
		else cout<<"I hate it";
	}
}