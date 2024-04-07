#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N); for (int&a:A) cin >> a;
    vector<int> P{1};
    int rest = 0, cur = A[0];
    for (int i = 1; i < N; ++i) {
        if (A[i] <= A[0]/2) {  
            cur += A[i];
            P.push_back(i+1);
        } else {
            rest += A[i];
        }
    }

    if (cur > rest) {
        cout << P.size() << endl;
        for (int i = 0; i < P.size(); ++i) cout << P[i] << " \n"[i==P.size()-1];
    } else {
        cout << 0 << endl;
    }
}