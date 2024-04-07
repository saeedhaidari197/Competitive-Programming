#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n<=3){
			int arr[3] = {9,8,9};
			for(int i=0; i<n; i++) cout<<arr[i];
		}
		else{
			cout<<"989";
			n -= 3;
			for(int i=0; i<n; i++) cout<<i%10;
		}
		cout<<"\n";
	}
}