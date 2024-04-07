#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test; 
	while(test--){
		string s; cin>>s;
		int num = 0;
		num = s[s.size()-1] - 48;
		int num2 = 0;
		num2 = s[0] - 48;
		if(num %2 == 0) cout<<0<<"\n";
		else if(num2%2 == 0) cout<<1<<"\n";
		else{
			bool possible = false;
			int num = 0;
			for(int i=1 ; i<s.size()-1; i++){
				num = s[i] - 48;
				if(num%2 == 0){
					possible = true;
					break;
				}
			}
			cout<<(possible ? "2\n" : "-1\n");
		}
	}
}