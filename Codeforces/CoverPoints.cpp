#include<bits/stdc++.h>
using namespace std;

main(){
	long long n; cin>>n;
	long long max = 0;
	while(n--){
		long long x , y;
		cin>> x >> y;
		if(x+y > max) max = x+y;
	}
	cout<<max<<"\n";
}