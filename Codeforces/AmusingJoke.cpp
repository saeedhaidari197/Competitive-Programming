#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	string s1,s2,s3;
	cin>> s1 >> s2 >> s3 ;
	string con = s1+s2;
	// solution  #1 this one took 30ms
//	if(con.length() != s3.length()) cout<<"NO";
//	else {
//		for(int i=0; i<con.length(); i++){
//			for(int e=0; e<s3.length(); e++){
//				if(con[i] == s3[e]){
//					s3.erase(s3.begin() + e);
//					break;
//				} 
//			}
//		}
//		if(s3.length() == 0){
//			cout<<"YES";
//		}
//		else cout<<"NO";
//	}

	//solution #2   this one took 62ms
	if(con.length() != s3.length()) cout<<"NO";
	else{
		sort(s3.begin(),s3.end()); 
		sort(con.begin(),con.end());
		if(s3.compare(con) == 0) cout<<"YES";
		else cout<<"NO";
	}
	
}