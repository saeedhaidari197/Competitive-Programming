#include <bits/stdc++.h>
using namespace std;
int main()
{
int test; cin>>test;
while (test--){
    long long n;
    cin >> n;
    cout << int(sqrt(n)) + int(cbrt(n)) - int(sqrt(cbrt(n))) << endl;
   }
}