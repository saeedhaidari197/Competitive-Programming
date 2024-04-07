#include <iostream>
using namespace std;

main(){
	int test; cin>> test;
	while(test--){
		int r,c;
		cin>> r >> c;
		char ch;
		int count = 0;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin>>ch;
				if(j == c-1 && ch == 'R') count++;
				if(i == r-1 && ch == 'D') count++;
			}
		}
		cout<<count<<"\n";
	}
}