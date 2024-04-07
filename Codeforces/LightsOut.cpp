#include <iostream>
using namespace std;

main(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int num; cin>>num;
			if(num % 2 == 0) cout<<1;
			else cout<<0;
		}
		cout<<"\n";
	}
}