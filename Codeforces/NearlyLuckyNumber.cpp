#include <iostream>
#include <string>
using namespace std;

main(){
	string number;
	int count = 0;
	cin>>number;
		for(int i =0; i<number.length(); i++){
		if(number[i] == '7' || number[i] == '4'){
			count++;
			}
		}
		if(count == 7 || count == 4)
		cout<<"YES";
		else cout<<"NO";
}