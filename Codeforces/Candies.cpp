#include <iostream>
using namespace std;

main(){
	int n , m; 
	cin>> n >> m;
	int div = n/m;
	int mod = n%m;
	int loop = m - mod;
	for(int i=0; i<loop; i++){
		cout<<div<<" ";
	}
	for(int i=0; i<mod; i++){
		cout<<div+1<<" ";
	}
}