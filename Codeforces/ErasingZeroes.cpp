#include <iostream>
#include <string>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int count = 0;
		int res = 0;
		int first = false;
		for(int i=0; i<s.length(); i++){
			if(!first && s[i] == '1') first = true;
			else if(first && s[i] == '0') count++;
			else if(first && s[i] == '1'){
				res += count;
				count = 0;
			}
		}
		cout<<res<<"\n";
	}
}