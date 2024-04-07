#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		string  str;
		int f = n;
		while(n >= 0){
			getline(cin, s);
			str += s;
			n--;
		}
		int size = str.length();
		set<char> m;
	    for (int i = 0; i <size; i++) {
	        m.insert(str[i]);
	    }
	    bool possible = true;
		for(auto i=m.begin(); i!=m.end(); ++i){
			int count = 0;
			for(int j=0; j<size; j++){
				if(*i == str[j]) count++;
			}
			if(count%f != 0){
				possible = false;
				break;
			}
		}
		if(possible) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}