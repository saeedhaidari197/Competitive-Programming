#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		long long max=0 , min = 1000000000;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num > max) max = num;
			if(num < min) min = num;
		}
		cout<<max - min<<"\n";
	}
}