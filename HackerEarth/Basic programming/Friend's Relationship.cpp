#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int len = n*2;
		int count = 1;
		while(n--){
			for(int i=0; i<count; i++){
				cout<<"*";
			}
			for(int i=0; i<len-(count*2); i++){
				cout<<"#";
			}
			for(int i=0; i<count; i++){
				cout<<"*";
			}
			cout<<"\n";
			count++;
		}
	}
}