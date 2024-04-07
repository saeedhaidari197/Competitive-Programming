#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int total = 0;
		string s; cin>>s;
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				if(s[i] == s[j] && i == j){
					total += 2;
				}
				else if(s[i] == s[j] && i != j){
					total++;
					break;
				}
			}
		}
		cout<<total<<"\n";
	}
}