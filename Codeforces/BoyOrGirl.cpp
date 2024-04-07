#include<iostream>
#include <string>
#include <set>
using namespace std;

main(){
	string username;
	cin>>username;
	set <char> s(username.begin() , username.end());
	if(s.size() % 2 == 0){
		cout<<"CHAT WITH HER!";
	}
	else cout<<"IGNORE HIM!";
}