#include<bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	int arr[n+1];
	    for(int i=1;i<=n;i++)cin>>arr[i];
	    int res=arr[1];
	    for(int i=2;i<=n;i++)res&=arr[i];
	    cout<<res<<endl;
	}
}