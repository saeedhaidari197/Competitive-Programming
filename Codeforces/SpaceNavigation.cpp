#include <iostream>
#include <string>
#include <math.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int x , y;
		cin>> x >> y;
		string s; cin>>s;
		int negx = 0 , posx = 0, negy = 0, posy = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == 'D') negy--;
			else if(s[i] == 'U') posy++;
			else if (s[i] == 'R') posx++;
			else negx--;
		}
		bool possible = true;
		if(x < 0){
			if(x < negx) possible = false;
		}
		else{
			if(x > posx) possible = false;
		}
		if(y < 0){
			if(y < negy) possible = false;
		}
		else{
			if(y > posy) possible = false;
		}
		if(possible) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}