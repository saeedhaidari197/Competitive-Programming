#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int max = 0;
		int maxes = 0;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] == max) maxes++;
			else if(arr[i] > max){
				max = arr[i];
				maxes = 1;
			}
		}
		if(maxes == n) cout<<-1<<"\n";
		else{
			for(int i=0; i<n; i++){
				if(arr[i] == max){
					if(i == 0){
						if(max != arr[i+1]){
						cout<<i+1<<"\n";
						break;
						}	
					} 
					else if(i == n-1){
						if(arr[i] != arr[i-1]){
						cout<<i+1<<"\n";
						break;
						}
					}
					else{
						if(arr[i] != arr[i-1] || arr[i] != arr[i+1]){
							cout<<i+1<<"\n";
							break;
						}
					}
				}
			}
		}	
	}
}