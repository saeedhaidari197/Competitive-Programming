#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		bool two = false;
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(abs(arr[i] - arr[j]) == 1) two = true;
			}
		}
		cout<<(two ? "2" : "1") << "\n";
	}
}