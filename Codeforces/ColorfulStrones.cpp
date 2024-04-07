#include <iostream>
#include <string>
using namespace std;

main(){
	string s,t;
	cin>> s >> t;
	int count = 0;
	for(int i=0; i<t.size(); i++){
		if(s[count] == t[i]){
			count++;
		}
	}
	cout<<count+1<<"\n";
}