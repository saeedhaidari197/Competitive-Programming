
#include<bits/stdc++.h>
using namespace std;
int t,n,i,a,b;
int main()
{
	int test; cin>>test;
	while(test--){
		int n,a,b;
		cin>>n>>a>>b;
		if((a<=n/2 && b>=n/2+1) || (a==n/2+1 && b==n/2)){
			cout<<a<<" ";
			for(int i=n;i>=1;i--){
				if(i!=a && i!=b){
					cout<<i<<" ";
				}
			}
			cout<<b;
		}else cout<<"-1";
		cout<<'\n';
	}
	return 0;
} 