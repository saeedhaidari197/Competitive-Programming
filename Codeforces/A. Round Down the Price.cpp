#include<iostream>
#include<string>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		int len = s.size();
		int num = stoi(s);
		if(len == 1){
			cout<<num-1<<"\n";
		}
		else{
			int ten = 1;
			len--;
			for(int i=0; i<len; i++){
				ten = ten * 10;
			}
			cout<<num - ten <<"\n";		
		}
	
	}
}