#include <iostream>
#include <vector>
using namespace std;

main(){
	int test; cin>> test;
	while(test--){
		int size; cin>>size;
		int res[size];
		int count0 = 0;
		int count1 = 0;
		for(int i=0; i<size; i++){
			int num;
			cin>>num;
			if(num%2 != i%2){
				if(i%2 == 1) count1++;
				else count0++;
			}
		}
		if(count1 != count0){
			cout<<-1<<endl;
		}
		else cout<<count1<<"\n";
		
	}
}