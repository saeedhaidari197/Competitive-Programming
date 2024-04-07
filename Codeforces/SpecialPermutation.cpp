#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n;
		cin>>n;
		if(n%2 == 1){
			for (int i=2; i<=n; i++){
				cout<<i<<" ";
			}cout<<1<<"\n";
		}
		else{
			for(int i=n; i>=1; i--){
				cout<<i<<" ";
			}
			cout<<"\n";
		}
			
	}
}