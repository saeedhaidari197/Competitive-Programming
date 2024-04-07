#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    string f = 'a' + s;
    string b = s + 'a';
    for(int i = 0; i < (n+1)/2; i++){
        if(f[i] != f[(n+1)-i-1]){
            cout << "YES\n";
            cout << f << "\n";
            return;
        }
    }
    for(int i = 0; i < (n+1)/2; i++){
        if(b[i] != b[(n+1)-i-1]){
            cout << "YES\n";
            cout << b << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}