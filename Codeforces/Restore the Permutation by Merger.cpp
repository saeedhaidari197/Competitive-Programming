#include<iostream>
#include<vector>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int p;
		cin>>p;
		int res[p] = {-1};
		int size = p*2;
		int arr[size];
		int index = 0;
		for(int i=0;i<size; i++){
			cin>>arr[i];
			bool found = false;
			for(int j=0; j<p; j++){
				if(arr[i] == res[j]){
					found = true;
					break;
				}
			}
			if(!found){
				res[index] = arr[i];
				index++;
			}
		}
		for(int i=0; i<p; i++){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
	}
	
}