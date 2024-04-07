#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

main(){
	string str;
	getline(cin,str);
	for(int i=0; i<str.length(); i++){
		if(str[i] == ' ') str.erase(str.begin()+i);
	}
	int size = str.length();
	double sum = sqrt(size);
	int r = floor(sum);
	int c = ceil(sum);
	for(int i=0;i<c; i++){
		cout<<str[i];
		for(int a=i+c; a<size; a++){
			cout<<str[a];
			a =  a + c-1;
		}
		cout<<" ";
	}
}