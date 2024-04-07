#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
    	long long a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;
	}
}