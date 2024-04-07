#include <iostream>
using namespace std;
main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		long long num1 , num2 , num3;
		cin>>num1>>num2;
		int pos;
		bool found = false;
		for(int i=2; i<n; i++){
			cin>>num3;
		}
		if(num3 >= num1+num2) cout<<1<<" "<<2<<" "<<n<<"\n";
		else cout<<-1<<"\n";
	}
}