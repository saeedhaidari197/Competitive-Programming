#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        char arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<n; i++){
            sort(arr[i], arr[i] +n);
        }
        bool possible = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(arr[j][i] > arr[j+1][i]){
                    possible = false;
                }
            }
            if(!possible) break;
        }
        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}