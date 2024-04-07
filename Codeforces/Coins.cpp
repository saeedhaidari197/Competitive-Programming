#include<bits/stdc++.h>
using namespace std;

main(){
	int n , s;
	cin>> n >> s;
	cout<<s/n + (s%n != 0)<<"\n";
}