#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		set <int> arr;
		set<int>::iterator it;
		int count = 0;
		for(int i=0; i<s.size()-1; i++){
			int num = 0;
			num = (num *10) + (s[i] - 48);
			arr.insert(num);
		}
		bool found = false;
		int i = 0;
		for( it = arr.begin(); it != arr.end(); ++it){
			if( i != *it){
				cout<<i<<"\n";
				found = true;
				break;
			}
			i++;
		}
		if(!found) cout<<i<<"\n";
	}
}