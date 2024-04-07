#include<bits/stdc++.h>
using namespace std;

main(){
	int x , y , z, t1, t2, t3;
	cin>> x >> y >> z >> t1 >> t2 >> t3;
	if(abs(x-y) * t1 < ((abs(x - z) + abs(x-y)) * t2) + (t3*3)) cout<<"No\n";
	else cout<<"YES\n";
}	