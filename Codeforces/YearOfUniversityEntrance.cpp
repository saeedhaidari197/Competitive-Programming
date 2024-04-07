#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>> n;
	set <int> arr;
	vector <int> ar;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		arr.insert(num);
	}
	for(auto i=arr.begin(); i != arr.end(); ++i){
		ar.push_back(*i);
	}
	int index;
	if(arr.size() % 2 == 1)index = ar.size()/2;
	else index = ar.size()/2 -1;
	cout<<ar[index]<<"\n";

}