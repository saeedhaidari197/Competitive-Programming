#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	if(n>0) cout<<n<<"\n";
	else{
		n *= -1;
		int last = n%10; 
		n /= 10;
		int prelast = n%10;
		n /= 10;
		if(n == 0 && (last == 0 || prelast == 0)) cout<<0<<"\n";
		else{
			cout<<"-";
			if(n != 0) cout<<n;	
			if(last >= prelast)cout<<prelast<<"\n";
			else cout<<last<<"\n";
		}
	}
}