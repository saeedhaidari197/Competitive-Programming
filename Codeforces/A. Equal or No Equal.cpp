#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int test;
  cin >> test;
  while (test--) {
    string s;
    cin >> s;
    puts(count(s.begin(), s.end(), 'N') == 1 ? "NO" : "YES");
  }
}