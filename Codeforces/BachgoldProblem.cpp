#include<iostream>
using namespace std;
main(){
	int n; cin>>n;
	int num = n/2;
	cout<<num<<"\n";
	if(n%2 == 1){
		for(int i=1; i<num; i++){
			cout<<2<<" ";
		}
		cout<<3;
	}
	else{
		for(int i=0; i<num; i++){
			cout<<2<<" ";
		}
	}
}