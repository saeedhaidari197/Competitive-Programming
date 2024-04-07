#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int c2 = 0, c1 = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num == 2) c2++;
			else c1++;
		}
		if(c2%2 == 0 && c1%2 == 0) cout<<"YES"<<"\n";
		else if(c2%2 != 0 && c1>=2 && c1%2 == 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}