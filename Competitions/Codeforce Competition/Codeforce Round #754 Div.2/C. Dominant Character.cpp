#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
//		int min = 5;
//		for(int i=0; i<n-1; i++){
//			if(s[i] == 'a'){
//				if(s[i+1] == 'a'){
//					min = 2; break;
//				}
//				else if(s[i+2] == 'a' && i+2 < n) min = 3;
//				else if(s[i+3] == 'a' && i+3 < n && s[i+1] != s[i+2]){
//					if(min >= 4) min = 4;
//				}
//			}
//		}
//		if(min == 5) cout<<-1<<"\n";
//		else cout<<min<<"\n";
//		string s1= "aa" , s2 = "aba", s3 = "aca" , s4 = "abca", s5 = "acba";
//		bool found = false;
//		if(s.find(s1) != string::npos){
//			cout<<2<<"\n";
//			found = true;
//		}
//		else if(s.find(s2) != string::npos || s.find(s3) != string::npos){
//			cout<<3<<"\n";
//			found = true;
//		} 
//		else if(s.find(s4) != string::npos || s.find(s5) != string::npos){
//			cout<<4<<"\n";
//			found = true;
//		}
//		if(!found) cout<<-1<<"\n";

		string s1= "aa" , s2 = "aba", s3 = "aca" , s4 = "abca", s5 = "acba" , s6 = "abbacca" , s7 = "accabba";
		bool found = false;
		if(strstr(s.c_str(),s1.c_str())){
			cout<<2<<"\n";
			found = true;
		}
		else if(strstr(s.c_str(),s2.c_str()) || strstr(s.c_str(),s3.c_str())){
			cout<<3<<"\n";
			found = true;
		} 
		else if(strstr(s.c_str(),s4.c_str()) || strstr(s.c_str(),s5.c_str())){
			cout<<4<<"\n";
			found = true;
		}
		else if(strstr(s.c_str(),s6.c_str()) || strstr(s.c_str(),s7.c_str())){
			cout<<7<<"\n";
			found = true;
		}
		
		if(!found) cout<<-1<<"\n";
	}
}