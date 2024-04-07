#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	string s;
	if(n%2 == 1){
		for(int i=1; i<=n; i++){
			char ch; cin>>ch;
			if(i%2 == 1) s.push_back(ch); 
			else s.insert(s.begin()+0,ch);
		}
	}
	else{
		for(int i=1; i<=n; i++){
			char ch; cin>>ch;
			if(i%2 == 1) s.insert(s.begin()+0,ch);
			else s.push_back(ch);
		}
	}	
	cout<<s<<"\n";
}