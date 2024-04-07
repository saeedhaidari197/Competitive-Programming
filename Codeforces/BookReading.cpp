#include<bits/stdc++.h>
using namespace std;

main(){
	int n , t; cin>> n >> t;
	bool found = false;
	int finish = -1;
	for(int i=1; i<=n; i++){
		int sec; cin>>sec;
		if(!found){
			int rem = 86400 - sec;
			t = t - rem;
			if(t <= 0){
				found = true;
				finish = i;
			}
		}
	}
	cout<<finish<<"\n";
}