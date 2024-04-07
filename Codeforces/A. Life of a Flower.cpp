#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int res = 1;
		bool die = false;
		int arr[n];
		cin>>arr[0];
		if(arr[0] == 1) res++;
		for(int i=1; i<n; i++){
			cin>>arr[i];
			if(!die){
				if(arr[i] == 1){
					if(arr[i-1] == 1) res += 5;
					else res++;
				}
				else{
					if(arr[i-1] == 0){
						die = true;
					}
				}
			}		
		}
		if(die) cout<<-1<<"\n";
		else cout<<res<<"\n";
	}
}