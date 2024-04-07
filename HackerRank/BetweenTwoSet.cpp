#include <iostream>
using namespace std;

main(){
	int n , m;
	cin>> n >> m;
	int a[n], b[m];
	int max = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] > max) max = a[i];
	}
	for(int i=0; i<m; i++){
		cin>>b[i];
		if(b[i] > max) max = b[i];
	}
	int count = 0;
	for(int i=2; i<=max; i++){
		int j;
		for(j=0; j<n; j++){
			if(i%a[j] != 0)break; 
		}
		if(j == n){
			for(j=0; j<m; j++){
				if(b[j]%i != 0) break;
			}
			if(j == m) count++;
		}
	}
	cout<<count<<"\n";
}