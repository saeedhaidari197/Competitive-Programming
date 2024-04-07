#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int num; cin>>num;
			if(i == j || i == (n-1)/2 || j == (n-1)/2 || i+j == n-1) sum += num;
		}
	}	
	cout<<sum<<"\n";
}