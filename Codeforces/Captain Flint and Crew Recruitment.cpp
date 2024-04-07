#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int num; cin>>num;
		if(num <= 30) cout<<"NO"<<"\n";
		else{
			cout<<"YES"<<"\n";
			if(num == 36 || num == 40 || num == 44){
				cout<<6<<" "<<10<<" "<<15<<" "<<num - 31<<"\n";
			}
			else cout<<6<<" "<<10<<" "<<14 << " " <<num - 30<<"\n";
		}
	}
}