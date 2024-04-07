#include <iostream>
using namespace std;

main(){
	long long n , k; cin>>n >> k;
	if(n%2 ==1) n++;
	if(k > n/2) cout<<2 * (k - (n/2))<<"\n";
	else cout<<2*k -1<<"\n";
}