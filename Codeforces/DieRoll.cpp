#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int x , y;
	cin>> x >> y;
	int m = max(x,y);
	m = ((6 - m) +1) ;
	if(m % 3 == 0){
		m = 6/m;
		cout<<1<<"/"<<m;	
	}
	else if(m%2 == 0) cout<<m/2<<"/"<<3;
	else cout<<m<<"/"<<6;
}