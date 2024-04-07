#include <iostream>
using namespace std;

main(){
	int a[3], b[3];
	int asum , bsum;
	cin>> a[0] >> a[1] >> a[2];
	asum = a[0] + a[1] + a[2];
	cin>> b[0] >> b[1] >> b[2];
	bsum = b[0] + b[1] + b[2];
	
	if(asum%5 == 0) asum = asum/5;
	else asum = (asum/5) +1;
	
	if(bsum%10 == 0) bsum = bsum/10;
	else bsum = (bsum/10) +1;
	
	int shelf;
	cin>> shelf;
	if(shelf < asum+bsum) cout<<"NO"<<"\n";
	else cout<<"YES"<<"\n";
}