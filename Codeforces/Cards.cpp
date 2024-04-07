#include <iostream>
#include <string>
using namespace std;

main(){
	int n; cin>>n;
	char arr[n];
	int count0 = 0, count1 = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == 'n') count1++;
		else if(arr[i] == 'z') count0++;
	}
	for(int i=0; i<count1; i++){
		cout<<1<<" ";
	}
	for(int i=0; i<count0; i++){
		cout<<0<<" ";
	}
}