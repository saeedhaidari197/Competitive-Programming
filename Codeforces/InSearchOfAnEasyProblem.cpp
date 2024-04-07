#include <iostream>
using namespace std;

main(){
	int cas;
	int num;
	bool easy = true;
	cin>>cas;
	while(cas--){
		cin>>num;
		if(num == 1) easy = false;
	}
	if(!easy) cout<<"HARD";
	else cout<<"EASY";
}