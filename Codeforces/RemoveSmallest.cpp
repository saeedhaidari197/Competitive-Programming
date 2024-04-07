#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(){
	int test;
	int size;
	cin >> test;
	while(test--){
		cin>> size;
		vector <int> arr;
		for(int i=0; i<size; i++){
			int num ;
			cin>>num;
			arr.push_back(num);
		}
		sort(arr.begin(), arr.end());
		for(int i=0; i<arr.size(); i++){
			for(int j=i+1; j<arr.size(); j++){
				int res = arr.at(i) - arr.at(j);
				if(res == -1 || res == 1 || res == 0){
					arr.erase(arr.begin()+i);
					j--;
				}
			}
		}
		if(arr.size() == 1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}