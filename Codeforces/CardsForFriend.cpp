#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int w , h , n;
		int count = 0;
		int itr = 1;
		cin>>w>>h>>n;
		if(n > 1){
			while(w%2 == 0 || h%2 == 0){
				if(w%2 == 0){
					w = w/2;
					count = itr*2;
					itr += itr;
				}
				else if(h%2 == 0){
					h = h/2;
					count = itr*2;
					itr += itr;
				}
			}
			if(count >= n) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
		else cout<<"YES"<<"\n";
	}
}