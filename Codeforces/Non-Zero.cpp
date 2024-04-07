#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int count = 0;
		int sum = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num == 0) count++;
			sum += num;
		}
		if(sum+count == 0) count++;
		cout<<count<<"\n";
	}
}