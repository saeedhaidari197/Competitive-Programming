#include<bits/stdc++.h>
using namespace std;

int pos(char s, string str){
    int index = 0;
    for(int i=0; i<=26; i++){
        if(str[i] == s){
            index = i;
            break;
        }
    }
    return index;
}

 int main(){
    string alp = "abcdefghijklmnopqrstuvwxyz";
    string alp2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string enc = alp;
    string enc2 = alp2;
    int n; cin>>n;
    string s; cin>>s;
    int k; cin>>k;
    k = k%26;
    for(int i=0; i<k; i++){
        char s = enc.front();
        enc.erase(enc.begin()+0);
        enc.push_back(s);
    }
    for(int i=0; i<k; i++){
        char s = enc2.front();
        enc2.erase(enc2.begin()+0);
        enc2.push_back(s);
    }
    for(int i=0; i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout<<enc[pos(s[i] , alp)];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            cout<<enc2[pos(s[i], alp2)];
        }
        else cout<<s[i];
    }
    cout<<"\n";
    
    return 0;
}