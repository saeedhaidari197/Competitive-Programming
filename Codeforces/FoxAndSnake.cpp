#include <iostream>
using namespace std;

main(){
	int r,c;
	cin>> r >> c;
	bool left = true;
	bool done = true;
	for(int i=0; i<r; i++){
		for(int e=0; e<c; e++){
			if(i%2 ==0) cout<<"#";
			else{
				if(done == true && left == true && i%2 == 1 && e == c-1 ){
					cout<<"#";
					left = false;
					done = false;
				}
				else if( done == true && left == false && i%2 ==1 && e == 0 ){
					cout<<"#";
					left = true;
					done = false;
				}
				else cout<<".";
			}

		}
		done = true;
		cout<<"\n";
	}
}