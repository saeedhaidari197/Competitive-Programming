#include <iostream>
#include <algorithm>
using namespace std;
 main(){
 	int test; cin>>test;
 	while(test--){
 		int n; cin>>n;
 		int arr[n];
		int m = 0;
 		for(int i=0; i<n; i++){
 			cin>>arr[i];
		}
		int count;
		for(int i=0 ; i<n; i++){
			count = 0;
			for(int j=0; j<n; j++){
				if(arr[i] == arr[j]) count++;
			}
			m = max(count,m);
		}
		cout<<m<<"\n";
	 }
 }