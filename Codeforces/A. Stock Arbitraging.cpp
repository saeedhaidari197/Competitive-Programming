#include <bits/stdc++.h>
using namespace std;
int n,m,i,s=2e9,b,x,r;
int main(){
	cin>>n>>m>>r;
	for(i=0;i<n;i++)cin>>x,s=min(s,x);
	for(i=0;i<m;i++)cin>>x,b=max(b,x);
	cout<<max(r,r%s+r/s*b);
}