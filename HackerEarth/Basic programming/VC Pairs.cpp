#include <iostream>
#include <string>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s; cin>>s;
		int count = 0;
		for(int i=0; i<n; i++){
			if(s[i] != 'a' && s[i] != 'o' && s[i] != 'i' && s[i] != 'e' && s[i] != 'u'){
				if(s[i+1] == 'a' || s[i+1] == 'o' || s[i+1] == 'i' || s[i+1] == 'e' || s[i+1] == 'u'){
					count++;
					i++;
				} 
			}
		}
		cout<<count<<"\n";
	}
		
}