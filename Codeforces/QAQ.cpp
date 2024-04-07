#include <bits/stdc++.h>
using namespace std;

main(){
	int count = 0;
	string s; cin>>s;
	int size = s.size();
	for(int i=0; i<size; i++){
		if(s[i] == 'Q'){
			for(int j=i+1; j<size; j++){
				if(s[j] == 'A'){
					for(int x=j+1; x<size; x++){
						if(s[x] == 'Q') count++;
					}
				}
			}	
		}
	}
	cout<<count<<"\n";
}