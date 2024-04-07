#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		int sum = 0;
		bool odd = false;
		bool even = false;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]%2 ==1) odd = true;
			else even = true;
			sum += arr[i];
		}
		if(sum%2 == 1) cout<<"YES"<<"\n";
		else if(odd && even) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}