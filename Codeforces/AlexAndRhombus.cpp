#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int ans = 1;
	for(int i=0; i<n; i++){
		ans += i * 4;
	}
	cout<<ans<<"\n";
}