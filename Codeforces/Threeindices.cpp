#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		bool possible = false;
		int index[3];
		for(int i=0; i<n; i++) cin>>arr[i];
		for(int i=0; i<n-2; i++){
			if(arr[i] < arr[i+1] && arr[i+1] > arr[i+2]){
				possible = true;
				index[0] = i+1;
				index[1] = i+2;
				index[2] = i+3;
				break;
			}
		}
		if(possible){
			cout<<"YES\n";
			cout<<index[0]<<" "<<index[1]<<" "<<index[2]<<"\n";
		}
		else cout<<"NO\n";
	}
}