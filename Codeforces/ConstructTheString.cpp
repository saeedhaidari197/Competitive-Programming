#include <bits/stdc++.h>
using namespace std;

main(){ 		//Code works fucking fine i dont know why the code force says runtime error exit code 
				// HEHEHEHE the error was i used string no i use char array and it works ;)
	string alp = "abcdefghijklmnopqrstuvwxyz";
	int test; cin>>test;
	while(test--){
		int n, a , b;
		cin>> n >> a >>b;
		char res[n];
		for(int i=0; i<b; i++){
			res[i] = alp[i];
		}
		for(int i=0; i<(n/b); i++){
			for(int j=0; j<b; j++){
				cout<<res[j];
			}
		}
		for(int i=0; i<(n%b); i++){
			cout<<res[i];
		}cout<<endl;
	}
		
}