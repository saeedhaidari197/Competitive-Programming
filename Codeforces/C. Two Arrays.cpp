#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	bool g;
	cin>>a;
	while(a--)
	{
		cin>>b;
		int c[b],d[b];
		for(int e=0;e<b;e++) cin>>c[e];
		for(int f=0;f<b;f++) cin>>d[f];
		sort(c,c+b);
		sort(d,d+b);
		g=1;
		for(int h=0;h<b;h++) if(d[h]<c[h]||d[h]>c[h]+1) g=0;
		if(g) cout<<"YES\n";
		else cout<<"NO\n";
	}
}