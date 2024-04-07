 #include<bits/stdc++.h>
 using namespace std;
 
 main(){
 	int test; cin>>test;
 	while(test--){
 		 string s; cin>>s;
 		 if(s[s.size()-1] == 'o') cout<<"FILIPINO\n";
 		 else  if(s[s.size()-1] == 'u') cout<<"JAPANESE\n";
 		 else cout<<"KOREAN\n";
	 }
 }