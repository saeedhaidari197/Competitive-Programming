#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	char ar[n];
	cin>>ar[0];
	bool possible = true;
	for(int i=1; i<n; i++){
		cin>>ar[i];
		if(ar[i] == 'H' && ar[i-1] == 'H') possible = false; 
	}
	if(possible){
		cout<<"YES"<<"\n";
		for(int i=0; i<n; i++){
			if(ar[i] == '.') cout<<"B";
			else cout<<"H";
		}
	}
	else cout<<"NO"<<"\n";

}