#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n; 
		int sum = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			sum += num;
		}
		if(n < sum){
			cout<<sum - n<<"\n";
		}
		else if(n > sum){
			cout<<1<<"\n";
		}
		else cout<<"0\n";
	}
}