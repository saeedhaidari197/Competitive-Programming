#include <bits/stdc++.h>
using namespace std;

main(){
	string s; cin>>s;
	char arr[5] = {'h','e','i','d','i'};
	int count = 0;
		bool possible = false;
		for(int i=0; i<s.size(); i++){
			if(s[i] == arr[count]){
				count++;
				if(count == 5){
					possible = true;
					break;
				}
			}
		}
		if(possible) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
}