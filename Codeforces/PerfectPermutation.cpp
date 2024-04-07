#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	if(n%2 == 1) cout<<-1<<"\n";
	else{
		n = n/2;
		for(int i=1; i<=n; i++){
			cout<<2*i<<" "<<(2*i)-1<<" ";
		}
	}
}