#include <bits/stdc++.h>
using namespace std;

main(){
	string s;
	cin>>s;
	int pre = 0 , next = 0;
	int size;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '.'){
			pre = (pre*10) + (s[i-1] - 48);
			next = (next*10) + (s[i+1] - 48);
			size = i-1;
			break;
		}
	}
	if(pre == 9) cout<<"GOTO Vasilisa."<<"\n";
	else if(next >= 5){
		pre++;
		for(int i=0; i<size; i++){
			cout<<s[i];
		}
		cout<<pre<<"\n";
	} 
	else{
		for(int i=0; i<size; i++){
			cout<<s[i];
		}
		cout<<pre<<"\n";
	}
}