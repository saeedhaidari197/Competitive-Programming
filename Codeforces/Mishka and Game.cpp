#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	int m = 0 , c = 0;
	for(int i=0; i<n; i++){
		int a , b;
		cin >> a >> b;
		if(a > b) m++;
		else if(a < b) c++;
	}
	if(m > c) cout<<"Mishka";
	else if(m < c) cout<<"Chris";
	else cout<<"Friendship is magic!^^"; 
}