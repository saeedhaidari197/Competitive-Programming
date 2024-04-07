#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;int m=1;
		for(int i=3;i<=2*n;i++)
			m=m*i%1000000007;
		cout<<m<<endl;
	}
}