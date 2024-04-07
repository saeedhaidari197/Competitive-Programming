#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		long long rem = 0;
		bool found = true;
		bool possible = true;
		for(int i=0; i<n; i++){
			long long num; cin>>num;
			if(found){
				rem = (rem+num) - i;
				if(rem < 0){
					found = false;
					possible = false;
				}
			}
		}
		cout<<(possible ? "YES\n" : "NO\n");
	}
}