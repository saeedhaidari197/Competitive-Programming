#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	int n;
	map<int,int> mp;
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
    	cin>>n;
    	int a[n];
    	mp.clear();
    	for(int i=1;i<=n;++i){
    		cin>>a[i];
    		mp[a[i]]++;
    	}
    	int tmp1,tmp2;
    	for(int i=0;i<=100;++i){
    		if(mp[i]) mp[i]--;
    		else{
    			tmp1=i;
    			break;
    		}
    	}
    	for(int i=0;i<=100;++i){
    		if(!mp[i]){
    			tmp2=i;
    			break;
    		}
    	}
    	cout<<tmp1+tmp2<<endl;
    }

    return 0;
}