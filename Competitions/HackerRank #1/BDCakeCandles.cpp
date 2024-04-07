#include <iostream>
using namespace std;

main(){
	int size; cin>>size;
	int max =0;
	int count = 0;
	int num;
	for(int i=0; i<size; i++){
		cin>> num;
		if(max == num) count++;
		if(max < num ){
			count = 1;
			max = num;
		}
	}
	cout<<count;
}