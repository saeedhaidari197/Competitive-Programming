#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int odd = 0;
	int even = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(num%2 == 0) even++;
		else odd++;
	}
	if(odd >= even) cout<<even<<"\n";
	else cout<<odd<<"\n";
}