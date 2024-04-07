#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		vector <long long> res;
		bool zero = false , five = false;
		for(int i=s.size()-1; i>=0; i--){
			if(s[i] == '0' && !zero){
				for(int j = i-1; j>=0; j--) if(s[j] == '0' || s[j] == '5') res.push_back(s.size() - (j+2)) , zero = true;
			}
			if(s[i] == '5' && !five){
				for(int j = i-1; j>=0; j--){
					if(s[j] == '7' || s[j] == '2'){
						res.push_back(s.size() - (j+2)) , five = true;	
					}
				} 
			}
		}
		long long min = 10000000000000;
		for(int i=0; i<res.size(); i++){
			if(res[i] < min) min = res[i];
		}
		cout<<min<<"\n";
	}
}