#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int a[n] , b[n];
	int min = 5000;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] < min) min = a[i];
	}
	int moves;
	bool possible = true;
	for(int i=0; i<n; i++){
		cin>>b[i];
		if(a[i] > min && a[i]/ min == 0){
			moves = a[i]/min - 1;
		}
		else possible = false;
	}
	cout<<(possible ? moves : -1);
	
}