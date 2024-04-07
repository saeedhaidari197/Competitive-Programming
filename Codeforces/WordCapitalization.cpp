#include<iostream>
#include<string>
using namespace std;

main(){
	string word;
	cin>>word;
	
	word[0] = toupper(word[0]);
	
	cout<<word;
}