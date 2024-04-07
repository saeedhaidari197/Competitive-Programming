#include<bits/stdc++.h>
using namespace std;

main(){
	
	int test; cin>>test;
    while (test--)
    {
        int n; cin>>n;
        int ans = 0;
        while (true)
        {
            int d = (n/10) * 10;
            ans += d;
            int p = n-d;
            n = (n/10) + p;

            if (n < 10)
            {
                ans += n;
                break;
            }
        }

        cout<<ans<<"\n";
    }
}