#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int ball = 1;
	for(int i=1; i<n; i++){
		ball += i;
		if(ball > n){
			ball -= n;
		}
		cout<<ball<<" ";
	}
}