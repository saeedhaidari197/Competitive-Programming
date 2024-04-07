#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	if(n%2==1) n++;
	n /= 2;
	if(n%2 == 1) cout<<1<<"\n";
	else cout<<0<<"\n";
}