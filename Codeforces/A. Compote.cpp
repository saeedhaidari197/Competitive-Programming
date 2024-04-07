#include<bits/stdc++.h>
using namespace std;

main(){
	int a , b , c;
	cin>> a >> b >> c;
	int mn = min(min(a, b/2) , c/4);
	cout<<mn + (mn*2) + (mn*4)<<"\n";
}