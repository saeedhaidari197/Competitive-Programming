#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int neg = 0;
	int arr[n]; 
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] < 0){
			neg++;
			arr[i] *= -1;
		}
	}
	long long count = 0;
	for(int i=0; i<n; i++){
		if(arr[i] > 1) count += arr[i] -1;
		else if(arr[i] == 0){
			if(neg%2 == 1){
				count++;
				neg++;
			}
			else count++;
		}
	}
	if(neg%2==1) count += 2;
	cout<<count<<"\n";
}