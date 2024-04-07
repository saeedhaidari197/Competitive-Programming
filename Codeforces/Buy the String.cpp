#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, c0 , c1, h;
		cin>> n >> c0 >> c1 >> h;
		int price = 0;
		int ones = 0 , zero = 0;
		for(int i=0; i<n; i++){
			char num; cin>>num;
			if(num == '0') zero++;
			else ones++;
		}
		price += min((ones*c0) + (ones * h) , (ones * c1));
		price += min((zero*c1) + (zero * h) , (zero * c0));
		
		cout<<price<<"\n";
	}
}