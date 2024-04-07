#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n, m;
		cin >> n >> m;
		int a[n] , b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int count = 0;
		for(int i=0; i<m; i++){
			cin>>b[i];
			for(int j=0; j<n; j++){
				if(b[i] == a[j]) count++;
			}
		}
		cout<<count<<"\n";
	}
}