#include<bits/stdc++.h>
using namespace std;
int n,i,p,q,x;
int main(){
	for(cin>>n;i<n;i++)cin>>x,x>0?p++:x<0?q++:0;
	cout<<(p*2>=n?1:q*2>=n?-1:0);
}