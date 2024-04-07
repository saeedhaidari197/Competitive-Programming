#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
	int test; cin>>test;
	while(test--){
		int n , k;
		cin>> n >> k;
		int size = n*k;
		int arr[size+1];
		for(int i=1; i<=size; i++) cin>>arr[i];
		int median = n/2 + (n%2 != 0);
		int sum = 0;
		int x = n - median;
		for(int i=0; i<k; i++){
			size -= x;
			sum += arr[size];
			size--;
		}
		cout<<sum<<"\n";
		
	}
}