#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector <pair <int, int>> meat(n);
	for(int i=0; i<n; i++){
		cin>>meat[i].first;
		cin>>meat[i].second;
	}
	int cost = 0;
	for(int i=0; i<n; i++){
		cost += meat[i].first * meat[i].second;
		int x = i+1;
		while(meat[x].second >= meat[i].second && x<n){
			cost += meat[x].first * meat[i].second;
			x++;
		}
		i = x-1;
	}
	cout<<cost<<"\n";
}