#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	string word;
	cin>> word;
	int upper =0  , lower =0;
	for(int i = 0; i<word.length(); i++)
	{
		if(word[i] >='A' && word[i] <= 'Z') upper++;
		if(word[i] >='a' && word[i] <= 'z') lower++;
	}
	if( upper > lower){
		for_each(word.begin(), word.end(), [](char & c) {
        c = ::toupper(c);
    });
	}
	else{
		for_each(word.begin(), word.end(), [](char & c) {
        c = ::tolower(c);
    });
	}
	cout<<word;
}