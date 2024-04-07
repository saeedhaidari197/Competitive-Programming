#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int sum1 = 0 , sum2 = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num; sum1 += num;
	}
	for(int i=0; i<n; i++){
		int num; cin>>num; sum2 += num;
	}
	if(sum2 > sum1) cout<<"No\n";
	else cout<<"Yes\n";
}