#include <iostream>
#include <set>
#include <vector>
using namespace std;

main(){
	int levels;
	int x, y;
	vector <int> pass;
	cin>> levels;
	cin>> x;
	while(x--){
		int num;
		cin>>num;
		pass.push_back(num);
	}
	cin>> y;
	while(y--){
		int num;
		cin>>num;
		pass.push_back(num);
	}
	set <int> s( pass.begin(), pass.end());
	if(s.size() == levels) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	
}