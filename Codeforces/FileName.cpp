#include <iostream>
#include <string>
using namespace std;

main(){
	int n; cin>>n;
	char arr[n];
	int count = 0;
	int remove = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == 'x' && count >= 2) remove++;
		else if(arr[i] == 'x') count++;
		else if(arr[i] != 'x') count = 0;
	}
	cout<<remove;
}