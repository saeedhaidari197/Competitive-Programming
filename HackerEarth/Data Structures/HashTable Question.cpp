#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int roll[n];
	string name[n];
	for(int i=0; i<n; i++){
		cin>>roll[i];
		cin>>name[i];
	}
	int p; cin>>p;
	for(int i=0; i<p; i++){
		int index; cin>>index;
		for(int j=0; j<n; j++){
			if(roll[j] == index){
				cout<<name[j]<<"\n";
				break;
			}
		}
	}
}