#include<bits/stdc++.h>
using namespace std;
 
main(){
    int test; cin>>test;
    while(test--){
        string s; cin>>s;
        if(s.size()%2 != 0) cout<<"NO"<<endl;
        else{
            bool possible = true;
            int back = s.size()/2;
            for(int i=0; i<s.size()/2; i++){
                if(s[i] != s[back]){
                    possible = false;
                    break;
                }
                back++;
            }
            cout<<(possible ? "YES" : "NO")<<endl;
        }
    }
}