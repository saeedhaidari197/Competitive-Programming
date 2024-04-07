#include <iostream>
using namespace std;

main(){
	long long a, b ,c;
	cin>> a >> b >> c;
	long long n; cin>>n;
	int count = 0; 
	for(int i=0; i<n; i++){
		long long num; cin>>num;
		if(num > b && num < c) count++;
	}
	cout<<count<<"\n";
}