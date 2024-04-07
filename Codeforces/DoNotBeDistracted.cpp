#include <iostream>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		int n; cin>>n;
		bool sus = false;
		char arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		for(int i=0; i<n-1; i++){
			if(arr[i] != arr[i+1]){
				for(int j=i+1; j<n; j++){
					if(arr[i] == arr[j]){
						sus = true;
						break;
					} 
				}
			}
			if(sus) break;
		}
		if(sus) cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n";
	}
}