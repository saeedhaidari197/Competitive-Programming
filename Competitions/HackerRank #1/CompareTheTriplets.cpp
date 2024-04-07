#include <iostream>
using namespace std;

main(){
	int a[3];
	int b[3];
	for(int i=0; i<3; i++){
		cin>>a[i];
	}
	int alice = 0;
	int bob = 0;
	for(int i=0; i<3; i++){
		cin>>b[i];
		if(a[i] > b[i]) alice++;
		if(a[i] < b[i]) bob++;
	}
	cout<<alice<<" "<<bob;
}