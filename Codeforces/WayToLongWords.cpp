#include<iostream>
#include<string>
using namespace std;

main(){
	int cas;
	string word;
	cin>>cas;
	while(cas--){
		cin>> word;
		if(word.length() > 10) cout<<word.at(0)<<word.length() - 2<<word.at(word.length() - 1)<<"\n";
		else cout<<word<<"\n";
		
	}
}