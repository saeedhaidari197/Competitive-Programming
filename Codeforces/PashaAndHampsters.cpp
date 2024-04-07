#include <iostream>
using namespace std;

main(){
	int n , a , b;
	cin>> n >> a >> b;
	int ar[a], br[b];
	bool arr[n] = {0};
	for(int i=0; i<a; i++){
		cin>>ar[i];
		arr[ar[i]-1] = true;
	}
	for(int i=0; i<b; i++) cin>>br[i];
	for(int i=0; i<n; i++){
		if(arr[i] == false) cout<<"2 ";
		else cout<<"1 ";
	}
}