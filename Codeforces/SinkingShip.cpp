#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin>>n;
	vector<string> cap , rat, wom , man;
	while(n--){
		string name , cat;
		cin>>name; cin>>cat;
		if(cat == "rat"){
			rat.push_back(name);
		}
		else if(cat == "woman" || cat == "child"){
			wom.push_back(name);
		}
		else if(cat == "captain"){
			cap.push_back(name);
		}
		else{
			man.push_back(name);
		}
	}
		for(int i=0; i<rat.size(); i++){
			cout<<rat[i]<<"\n";
		}
		for(int i=0; i<wom.size(); i++){
			cout<<wom[i]<<"\n";
		}
		for(int i=0; i<man.size(); i++){
			cout<<man[i]<<"\n";
		}
		for(int i=0; i<cap.size(); i++){
			cout<<cap[i]<<"\n";
		}
}