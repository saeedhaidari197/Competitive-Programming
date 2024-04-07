#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int test; cin>>test;
	string temp;
	getline(cin, temp);
	while(test--){
		string s;
		getline(cin, s);
		vector<int> arr;
		for(int i=0; i<s.size(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				int num;
				if(s[i] == '1' && s[i+1] == '0'){
					num = 10;
					i++;
				}
				else{
					num = (s[i] - 48);
				}
				
				arr.push_back(num);
			}
		}
		vector<int> up;
		vector<int> down;
		for(int i=1; i<arr.size(); i++){
			if(arr[i] > arr[0]) up.push_back(arr[i]);
			else if(arr[i] < arr[0]) down.push_back(arr[i]);
		}
		vector<int> res;
		sort(up.begin(), up.end());
		sort(down.rbegin(), down.rend());
		
		if(arr[0] < arr[1]){
			res.push_back(arr[0]);
			for(int i=0; i<up.size(); i++) res.push_back(up[i]);
			for(int i=0; i<down.size(); i++) res.push_back(down[i]);
		}
		else{
			res.push_back(arr[0]);
			for(int i=0; i<down.size(); i++) res.push_back(down[i]);
			for(int i=0; i<up.size(); i++) res.push_back(up[i]);
		}
		for (int i=0; i<res.size(); i++) cout<<res[i]<<" ";
		cout<<endl;
	}
	
	
	return 0;
}