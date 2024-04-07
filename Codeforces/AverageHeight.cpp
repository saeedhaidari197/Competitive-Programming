#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>> test;
	while(test--){
		int n; cin>>n;
		vector <int> odd;
		vector <int> even;
		while(n--){
			int num; cin>>num;
			if(num%2 == 0) even.push_back(num);
			else odd.push_back(num);
		}
		for(int i=0; i<even.size(); i++){
			cout<<even[i]<<" ";
		}
		for(int i=0; i<odd.size(); i++){
			cout<<odd[i]<<" ";
		}
		cout<<"\n";
	}
}