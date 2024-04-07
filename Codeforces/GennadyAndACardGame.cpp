#include <iostream>
#include <utility>
#include <vector>
using namespace std;

main(){
	pair<char, char> table;
	vector<pair<char,char>> hand;
	
	bool play = false;
	cin>>table.first>>table.second;
	for(int i=0; i<5; i++){
		char a;
		char b;
		cin>>a>>b;
		hand.push_back(make_pair(a,b));
		if(hand.at(i).first == table.first || hand.at(i).second == table.second) play = true;
	}
	if(play) cout<<"YES";
	else cout<<"NO";
}