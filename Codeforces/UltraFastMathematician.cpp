#include <iostream>
#include <string>
using namespace std;

main(){
 	string num1, num2;
 	cin>>num1 >>num2;
 	string res;
 	
 	for(int i=0; i<num1.length(); i++){
 		if(num1[i] == num2[i]){
 			res.push_back('0');
		 }
		 else res.push_back('1');
	 }
	 cout<<res;
}