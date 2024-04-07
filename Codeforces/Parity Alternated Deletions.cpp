#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	vector <int> odd , even;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(num%2 == 0) even.push_back(num);
		else odd.push_back(num);
	}
	int o = odd.size();
	int e = even.size();
	int dif = abs(o - e);
	if(dif > 1){
		if(o > e){
			sort(odd.begin(), odd.end());
			long long sum = 0;
			o = o - e - 1;
			for(int i=0; i<o; i++) sum += odd[i];
			cout<<sum<<"\n";
		}
		else{
			sort(even.begin(), even.end());
			long long sum = 0;
			e = e - o - 1;
			for(int i=0; i<e; i++) sum += even[i];
			cout<<sum<<"\n";
		}
	}
	else cout<<0<<"\n";
}