#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		bool oddIndex = false;
		bool evenIndex = false;
		int num; cin>>num;
		string res = "YES\n";
		if(num % 2 == 0) oddIndex = true;
		cin>>num;
		if(num%2 == 0) evenIndex = true;
		bool found = false;
		for(int i=3; i<=n; i++){
			cin>>num;
			if(i%2 == 1 && !found){
				if(oddIndex && num%2 == 1){
					res = "NO\n";
					found = true;
				}
				if(!oddIndex && num%2 == 0){
					res = "NO\n";
					found = true;
				} 
			}
			if(i%2 == 0 && !found){
				if(evenIndex && num%2 == 1){
					res = "NO\n";
					found = true;
				}
				if(!evenIndex && num%2 == 0){
					res = "NO\n";
					found = true;
				} 
			}
		}
		cout<<res;
	}
}