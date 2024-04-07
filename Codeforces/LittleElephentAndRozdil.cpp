#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	long long arr[n];
	int count;
	int index = -1;
	long long min = 10000000000;
	for(int i=0; i<n; i++){
		long long num; cin>>num;
		if(num < min){
			min = num;
			index = i+1;
			count = 1;
		}
		else if(num == min) count++;
	}
	if(count == 1) cout<<index<<"\n";
	else cout<<"Still Rozdil\n";
}