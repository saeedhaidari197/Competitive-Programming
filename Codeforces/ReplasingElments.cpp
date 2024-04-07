#include <iostream>
#include <algorithm>
using namespace std;
main(){
	int test; cin>>test;
	while(test--){
		int n , d;
		cin>> n >> d;
		int arr[n];
		bool search = false;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] > d) search = true;
		}
		if(search){
			sort(arr, arr+n);
			if(arr[0]+arr[1] > d) cout<<"NO"<<"\n";
			else cout<<"YES"<<"\n";
		}
		else cout<<"YES"<<"\n";
	}
}