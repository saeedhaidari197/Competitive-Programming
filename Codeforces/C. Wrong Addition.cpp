#include <iostream>
#include <set>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false),cin.tie(0)
typedef long long ll;
 
int main()
{
	fast_io;
 
	int test;cin>>test;
	while(test--)
	{
		ll a,n;cin>>a>>n;
 
		ll b=0;
		int x,y,p10=1;
		while(a>0)
		{
			x=a%10,y=n%10;
			if(y<x)
			{
				n/=10;
				y+=n%10*10;
			}
			if(y<x||y-x>9)
			{
				b=-1;
				break;
			}
			b+=p10*(y-x);
			a/=10,n/=10,p10*=10;
		}
		if(b!=-1) b+=p10*n;
		cout<<b<<"\n";
	}
}