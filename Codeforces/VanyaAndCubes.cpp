#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int l = 0;
	int i = 1;
	int itr = 0;
	if(n != 1){
		while(n >= i+l){
			l = i+l;
			n = n-l;
			itr++;
			i++;
		}
		cout<<itr;
	}
	else cout<<1;
		
}