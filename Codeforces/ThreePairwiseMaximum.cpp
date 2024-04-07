#include <iostream>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long arr[3];
		int count = 0;
		long long max = 0;
		for(int i=0; i<3; i++){
			cin>>arr[i];
			if(arr[i] > max){
				max = arr[i];
				count = 0;	
			} 
			if(arr[i] == max) count++;
		}
		if(count ==3){
			cout<<"YES"<<"\n";
			cout<<max<<" "<<max<<" "<<max<<"\n";
		}
		else if(count ==  2){
			cout<<"YES"<<"\n";
			int m = min(min(arr[0],arr[1]),arr[2]);
			cout<<m<<" "<<m<<" "<<max<<"\n";
		}
		else cout<<"NO"<<"\n";
	}
}