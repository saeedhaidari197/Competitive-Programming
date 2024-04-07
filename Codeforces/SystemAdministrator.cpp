#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int ax = 0, bx = 0;
	int at = 0, bt = 0;
	while(n--){
		int t , x , y;
		cin>> t >> x >> y;
		if(t == 1){
			at += 10;
			ax += x;
		}
		else{
			bt += 10;
			bx += x;
		}
	}
	if(ax >= at/2) cout<<"LIVE"<<"\n";
	else cout<<"DEAD"<<"\n";
	if(bx >= bt/2) cout<<"LIVE"<<"\n";
	else cout<<"DEAD"<<"\n";
}