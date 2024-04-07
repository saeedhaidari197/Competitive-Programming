#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s,ans = "";
    cin>>s;
    int flag = 1;
    for(int i=0;i<s.size();++i){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')ans+=s[i],flag = 1;
        else{
            if(flag){
                ans+=s[i];
                flag = 0;
            }
        }
    }
    cout<<ans;
    return 0;
}