#include <iostream>
using namespace std;
main(){
	int test; cin>>test;
	while(test--){
		int n , k;
		cin>> n >> k;
		for(int i=0; i<n; i++){
			int num;
			cin>>num;
			if(num <= 0) k--;
		}
		if(k > 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}