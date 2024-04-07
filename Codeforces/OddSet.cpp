#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		n = n*2;
		int o = 0, e = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num%2 == 1) o++;
			else e++;
		}
		if(o != e) cout<<"NO\n";
		else cout<<"YES\n";
	}
}