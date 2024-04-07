#include <iostream>
#include <vector>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int count = 0;
		int zeros = 0;
		int first = -1;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(first == -1 && num == 1){
				first = 1;
			}
			else if(first > -1 && num == 1){
				count += zeros;
				zeros = 0;
			}
			else if(first > -1) zeros++;
		}
		cout<<count<<"\n";
	}
}