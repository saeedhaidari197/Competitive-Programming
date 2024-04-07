#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	string word1 , word2;
	cin>> word1 >> word2;
	for_each(word1.begin(), word1.end(), [](char & c) {
        c = ::tolower(c);
    });
    for_each(word2.begin(), word2.end(), [](char & c) {
        c = ::tolower(c);
    });
	cout<<word1.compare(word2);
}