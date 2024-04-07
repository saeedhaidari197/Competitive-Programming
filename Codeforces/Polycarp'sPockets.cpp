#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	int count = 0;
	int max = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		for(int j=0; j<=i; j++){
			if(arr[j] == arr[i])count++;
		}
		if(count > max) max = count;
		count = 0;
	}
	cout<<max<<"\n";
}