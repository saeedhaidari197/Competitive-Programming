#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int count = 0;
		while(n >= 6){
			if(n%6 == 0){
				n /= 6;
				count++;
			}
			else if(n%3 == 0){
				n *= 2;
				count++;
			}
			else{
				count = -1;
				break;
			}
		}
		if(n == 1)cout<<count<<"\n";
		else if(n == 3) cout<<count+2<<"\n";
		else cout<<-1<<"\n";
	}
}