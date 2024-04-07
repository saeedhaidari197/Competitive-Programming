#include <iostream>
#include <math.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int sum = 0;
		int num;
		for(int i=0; i<n; i++){
			cin>>num;
			sum += num;
		}
		cout<<(sum + n-1)/n<<"\n";
	}
}