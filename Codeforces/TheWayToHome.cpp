#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int d; cin>>d;
	char arr[n];
	int count = 0;
	bool possible = true;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(possible){
			if(arr[i] == '0'){
				count++;
				if(count >= d) possible = false;
			}
			else count = 0;
		}
			
	}
	if(!possible) cout<<-1<<"\n";
	else{
		count = 0;
		int i = 0;
		while(true){
			i += d;
			if(i >= n-1){
				count++; 
				break;
			}
			while(true){
				if(arr[i] == '1'){
					count++;
					break;
				}
				i--;
			}
			
		}
		cout<<count<<"\n";
	}
}