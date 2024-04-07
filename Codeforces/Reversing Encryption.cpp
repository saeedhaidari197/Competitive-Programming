#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	string s; cin>>s;
	char temp[10000];
	for(int i=2; i<=n; i++){
		if(n%i == 0){
			int ind = 0;
			for(int j=i-1; j>=0; j--){
				temp[ind] = s[j];
				ind++; 
			}
			for(int j=0; j<i; j++){
				s[j] = temp[j];
			}
		}
	}
	for(int i=0; i<n; i++) cout<<s[i];
}