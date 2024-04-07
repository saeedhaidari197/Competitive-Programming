#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int t; cin>>t;
	set <int> arr;
	int size = 0;
	vector <int> index;
	for(int i=1; i<=n; i++){
		int num; cin>> num;
		arr.insert(num);
		if(arr.size() > size){
			size = arr.size();
			index.push_back(i);
		}
	}
	if(arr.size() >= t){
		cout<<"YES"<<"\n";
		for(int i=0; i<t; i++){
			cout<<index[i]<<" ";
		}
	}
	else cout<<"NO"<<"\n";
}