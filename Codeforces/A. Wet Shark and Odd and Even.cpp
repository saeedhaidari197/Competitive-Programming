#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	long long sum = 0;
	vector <long long> odd;
	for(int i=0; i<n; i++){
		long long num ; cin>>num;
		if(num%2 == 0) sum += num;
		else{
			odd.push_back(num);
		}
	}
	sort(odd.begin(), odd.end());
	int s;
	if(odd.size() % 2 == 0) s = 0;
	else s = 1;
	for(int i=odd.size()-1; i>=s; i--){
		sum += odd[i];
	}
	cout<<sum<<"\n";
}