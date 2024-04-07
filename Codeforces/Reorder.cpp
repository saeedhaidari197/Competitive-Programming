#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, m;
		cin>> n >> m;
		int sum = 0;
		for(int i=0; i<n; i++){
			int x; cin>>x;
			sum += x;
		}
		if(sum == m) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}