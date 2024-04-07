#include <bits/stdc++.h>
using namespace std;

main(){
	int a , d , m;
	cin>> a >> d >> m;
	int g , p , b;
	cin>> g >> p >> b;
	if(a > g) cout<<"NO"<<"\n";
	else if( d > g+p-a) cout<<"NO"<<"\n";
	else if( m > (g+p+b) - (a+d)) cout<<"NO"<<"\n";
	else cout<<"YES"<<"\n";
}