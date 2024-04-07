#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n; cin>>n;
		int res = 0;
		while(n != 1){
			if(n%2 == 0){
				res++;
				n = n/2;
			}else 
			if(n%3 == 0){
				res++;
				n = (n*2) /3;
			}else
			if(n%5 == 0){
				res++;
				n = (n*4) /5;
			}
			else{
				res = -1;
				break;
			}
		}
		cout<<res<<"\n";
	}
}