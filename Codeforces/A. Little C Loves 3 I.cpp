#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int a = 1 , b = 1, c = n-2;
	if(c%3 == 0){
		b++;
		c--;
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";
}