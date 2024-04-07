#include <iostream>
#include <string>
using namespace std;

main(){
	int test;
	cin>> test;
	while(test--){
		string s;
		cin>>s;
		for(int i=1; i<s.length()-1; i++){
			if(s[i] == s[i+1]){
				s.erase(s.begin() + i);
			}
		}
		cout<<s<<"\n";
	}
}