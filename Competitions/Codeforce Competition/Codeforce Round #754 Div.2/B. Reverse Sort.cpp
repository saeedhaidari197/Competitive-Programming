#include<bits/stdc++.h>
#define int long long int
#define pb push_back

using namespace std;

    
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test; cin>>test;
    while(test--){
        int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   int z=0;
	   bool flg1=0,flg2=0;
	   for(int i=0;i<n;i++){
	    if(s[i]=='0')z++;
	    if(s[i]=='1')flg1=1;
	    if(flg1==1 && s[i]=='0')flg2=1;
	   }
	   int o=n-z;
	   if(flg2==0){
	    cout<<"0"<<endl;
	    continue;
	   }
	   vector<int> v;
	   cout<<1<<endl;
	    for(int i=0;i<z;i++){
	    if(s[i]=='1')v.pb(i+1);
	   }
	   for(int i=z;i<n;i++){
	    if(s[i]=='0')v.pb(i+1);
	   }
	   cout<<v.size()<<" ";
	   for(int i=0;i<v.size();i++){
	    cout<<v[i]<<" ";
	   }
	   cout<<endl;
    }
    
}