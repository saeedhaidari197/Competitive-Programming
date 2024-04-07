#include<bits/stdc++.h>
#define int long long
using namespace std;
 
const int N = 1e5+1;
int t,n,a[N],b[N],x;
signed main()
{
	for(cin >> t;t--;){
		cin >> n;
		bool ok=1;
		for(int i=1;i<=n;i++){
			cin >> x;
			int cnt=0;
			for(int j=i+1;j>=1;j--) if(x%j!=0) break; else cnt++;
			if(cnt>i) ok=0;
		}
		puts(ok?"YES":"NO");
	}
}