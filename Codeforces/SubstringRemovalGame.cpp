#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		int count = 0;
		vector <int> arr;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '1') count++;
			else if(s[i] == '0'){
				if(count > 0) arr.push_back(count);
				count = 0;
			}
		}
		if(count > 0) arr.push_back(count);
		sort(arr.begin(), arr.end(), greater<int>());
		int score = 0;
		for(int i=0; i<arr.size(); i++){
			score += arr[i];
			i++;
		}
		cout<<score<<"\n";
	}
}