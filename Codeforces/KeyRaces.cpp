#include <iostream>
using namespace std;

main(){
	int s , v1 , v2 , t1 , t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	int p1 , p2;
	p1 = (s*v1) + (2*t1);
	p2 = (s*v2) + (2*t2);
	if( p1 < p2) cout<<"First"<<"\n";
	else if( p2 < p1) cout<<"Second"<<"\n";
	else cout<<"Friendship"<<"\n";
}