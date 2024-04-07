#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int count = 0;
	if(n == 2) cout<<1;
	else{
		for(int i=1; i<n-1; i++){
			if(n%i == 0) count++;
		}
		cout<<count;
	}
		
}