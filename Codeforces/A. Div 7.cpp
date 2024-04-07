#include<iostream>
using namespace std;
#define ll long long
#define nl endl
#define boomBabe                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define testing \
    int t;      \
    cin >> t;   \
    while (t--)
ll dif(ll n, ll ans)
{
    ll dif = 0;
    while (n and ans)
    {
        if (n % 10 != ans % 10)
            dif++;
 
        n /= 10;
        ans /= 10;
    }
    return dif;
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 7 == 0)
    {
        cout << n << nl;
        return;
    }
 
    ll ans1 = n - n % 7;
    ll ans2 = ans1 + 7;
    ll x = dif(n, ans1);
    ll y = dif(n, ans2);
    if (x < y)
        cout << ans1;
    else
        cout << ans2;
    cout << nl;
}
 
int32_t main()
{
    // boomBabe;
    testing
    solve();
    return 0;
}

