#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
//		long long x , y , a , b;    //My solution will be time extended not working
//		cin >> x >> y >> a >> b;
//		int count = 0;
//		bool possible = false;
//		while( x < y){
//			count++;
//			x += a;
//			y -= b;
//			if(x == y){
//				possible = true;
//				break;
//			}
//		}
//		if(possible) cout<<count<<"\n";
//		else cout<<"-1"<<"\n";

		int x , y, a, b;
		cin>> x >> y >> a >> b;
		int dif = y - x;
		int jump = a+b;
		if(dif%jump == 0){
			cout<<dif/jump<<"\n";
		}
		else cout<<-1<<"\n";
	}
}