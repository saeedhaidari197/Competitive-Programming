#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		for(int i=0; i<n; i++){
			int len; cin>>len;
			string s; cin>>s;
			for(int j=0; j<len; j++){
				if(s[j] == 'U'){
					if(arr[i] == 0) arr[i] = 9;
					else arr[i]--;
				}
				else{
					if(arr[i] == 9) arr[i] = 0;
					else arr[i]++;
				}
			}
		}
		for(int i=0; i<n; i++) cout<<arr[i]<<" ";
		cout<<"\n";
	}
}