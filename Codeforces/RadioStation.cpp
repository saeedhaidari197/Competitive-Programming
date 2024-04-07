#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n , m;
	cin>> n >> m;
	vector <pair<string , string>> arr;
	for(int i=0; i<n; i++){
		string name; cin>> name;
		string ip; cin>> ip;
		arr.push_back(make_pair(ip, name));
	}
	for(int i=0; i<m; i++){
		string command; cin>>command;
		string ip; cin>>ip;
		ip.pop_back();
		for(int i=0; i<n; i++){
			if(arr[i].first == ip){
				cout<<command<<" "<<ip<<"; #"<<arr[i].second<<"\n";
				break;
			}
		}
	}
}