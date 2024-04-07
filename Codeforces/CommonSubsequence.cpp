#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n , m;
		cin>> n >> m;
		int arr1[n];
		int arr2[m];
		bool found = false;
		int num;
		for(int i=0; i<n; i++){
			cin>>arr1[i];
		}
		for(int i=0; i<m; i++){
			cin>>arr2[i];
			if(!found){
				for(int j=0; j<n; j++){
					if(arr2[i] == arr1[j]){
						found = true;
						num = arr1[j];
						break;
					}
				}
			}
		}
		if(found){
			cout<<"YES"<<"\n";
			cout<<1<<" "<<num<<"\n";
		}
		else cout<<"NO"<<"\n";
	}
}