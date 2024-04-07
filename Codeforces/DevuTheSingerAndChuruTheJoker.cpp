#include <iostream>
using namespace std;

main(){
	int n, d;
	cin>> n >> d;
	int sum = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		sum += num;
	}
	if((n-1)*10+sum > d) cout<<-1<<"\n";
	else{
		d -= sum;
		cout<<d/5<<"\n";
	}
}