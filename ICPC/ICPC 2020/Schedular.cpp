#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int k , n;
		cin>>k >> n;
		vector <string> str;
		vector <int> arr;
		vector <string> ans;
		while(n--){
			string s; cin>>s;
			int num; cin>>num;
			str.push_back(s);
			arr.push_back(num);
		}
		while(arr.size() > 0){
			for(int i=0; i<arr.size(); i++){
				arr[i] -= k;
				if(arr[i] < 0){
					ans.push_back(str[i]);
					arr.erase(arr.begin()+i);
					str.erase(str.begin()+i);
				}
			}
		}
		for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
}