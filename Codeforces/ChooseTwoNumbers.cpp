#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int a[n];
	int Amax = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] > Amax) Amax = a[i];
	}
	int m;
	cin>>m;
	int b[m];
	int Bmax = 0;
	for(int i=0; i<m; i++){
		cin>>b[i];
		if(b[i] > Bmax) Bmax = b[i];
	}
	
	cout<<Amax<<" "<<Bmax<<"\n";
}