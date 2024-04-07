#include <iostream>
using namespace std;

main(){
	int test;
	cin>>test;
	while(test--){
		int x , y , n;
		cin>> x >> y >> n;
		int rem = n%x;
		if(rem == y) cout<<n<<"\n";
		else if(rem < y ){
			n = n-rem;
			n = n-x;
			n = n+y;
			cout<<n<<"\n";
		}
		else{
			int k = (n - rem) + y;
			cout<<k<<"\n";
		}
	}
		
	
}