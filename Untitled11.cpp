#include<bits/stdc++.h>
using namespace std;

int pos(char s, string str){
    for(int i=0; i<str.size(); i++){
        if(str[i] == s){
            return i;
        }
    }
}

main(){
    string alp = "abcdefghijklmnopqrstuvwxyz";
    string enc = alp;
    int n; cin>>n;
    string s; cin>>s;
    int k; cin>>k;
    k = k%26;
    for(int i=0; i<k; i++){
        char s = enc.front();
        enc.erase(enc.begin()+0);
        enc.push_back(s);
    }
    for(int i=0; i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout<<enc[pos(s[i] , alp)];
        }
        else cout<<s[i];
    }
    cout<<"\n";
}