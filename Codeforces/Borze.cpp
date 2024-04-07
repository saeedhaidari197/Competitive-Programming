#include <iostream>
#include <string>
using namespace std;

main(){
	string str;
	cin>>str;
	int size = str.length();
	for(int i=0; i<size; i++){
		if(str[i] == '.') cout<<"0";
		else if(str[i] == '-' && str[i+1] == '.'){
			cout<<"1";
			i++;
			if(size == i+1) break;
		}
		else if(str[i] == '-' && str[i+1] == '-'){
			cout<<"2";
			i++;
			if(size == i+1) break;
		}
	}
	cout<<"\n";
}