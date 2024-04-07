#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n%2 == 0){
			for(int i=1; i<= n/2; i++) cout<<2*i<<" "<<(2*i) - 1<<" ";
			cout<<"\n";
		}
		else{
			cout<<"3 1 2 ";
			for(int i=2; i<=n/2; i++) cout<<2*i + 1<<" "<<2*i<<" ";
			cout<<"\n";
		}
	}
}