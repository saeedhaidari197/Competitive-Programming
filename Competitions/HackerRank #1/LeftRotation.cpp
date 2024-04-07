#include <iostream>
#include <vector>
using namespace std;
main(){
	int size; cin>>size;
	int d; cin>>d;
	vector <int> arr;
	for(int i=0; i<size; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	while(d--){
		int front = arr[0];
		arr.erase(arr.begin()+0);
		arr.push_back(front);
	}
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}