#include <bits/stdc++.h>
using namespace std;

main(){
	string arr = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch; cin>>ch;
	string s; cin>>s;
	if(ch == 'R'){
		for(int i=0; i<s.size(); i++){
			for(int j=0; j<30; j++){
				if(s[i] == arr[j]){
					cout<<arr[j-1];
					break;
				}
			}
		}
	}
	else{
		for(int i=0; i<s.size(); i++){
			for(int j=0; j<30; j++){
				if(s[i] == arr[j]){
					cout<<arr[j+1];
					break;
				}
			}
		}
	}
	
}