#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int first = n/3, second = n/3, third = n/3;
		if(n%3 == 1){
			second = second + 2;
			third--;
		}
		else if(n%3 == 2){
			first++;
			second += 2;
			third--;
		}
		else{
			second++;
			third--;
		}
		
		cout<<first<<" "<<second<<" "<<third<<"\n";
	}
}