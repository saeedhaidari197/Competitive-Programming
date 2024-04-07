#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int l = 0 , r = 0;
		for(int i=0; i<6; i++){
			char s; cin>>s;
			if(i >=3) r = r + (s - 48);
			else l = l + (s - 48);
		}
		if (l == r) cout<<"YES\n";
		else cout<<"NO\n";
	}
}