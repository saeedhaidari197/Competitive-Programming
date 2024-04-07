#include<iostream>
using namespace std;

int main(){
	int test; cin>>test;
	while(test--){
		int timur; cin>>timur;
		int count = 0;
		for(int i=0; i<3; i++){
			int num; cin>>num;
			if(num > timur) count++;
		}
		
		cout<<count<<"\n";
	}
	
	return 0;
}