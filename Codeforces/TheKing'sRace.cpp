#include<bits/stdc++.h>
using namespace  std;

main(){
	long long n; cin>>n;
	long long x , y;
	cin>> x >> y;
	
	long long whiteMove =max(x-1,y-1);
    long long blackMove = max(n-x, n-y);
    if(whiteMove<=blackMove) cout<<"White"<<"\n";
    else cout<<"Black"<<"\n";
}