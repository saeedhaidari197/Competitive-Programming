#include<bits/stdc++.h>
using namespace std;

main(){
	int n , k; 
	cin>>n >> k;
	int a = -1000000000;
	while(n--){
		int f , t;
		cin>>f >> t;
		if(t <= k) a = max(a,f);
		else a = max(a, f-(t-k));
	}
	cout<<a<<"\n";
}