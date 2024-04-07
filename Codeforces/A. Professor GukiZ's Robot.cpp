#include<bits/stdc++.h>
using namespace std;

main(){
	long long x1 , y1;
	cin>> x1 >> y1;
	long long x2 , y2;
	cin>> x2 >> y2;
	long long difx = abs(x1 - x2);
	long long dify = abs(y1 - y2);
	cout<<max(difx , dify)<<"\n";
}