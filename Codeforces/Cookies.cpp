#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n; 
	int sum = 0, odd = 0, even = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(num%2 == 0) even++;
		else odd++;
		sum += num;
	}
	if(sum%2 == 0) cout<<even<<"\n";
	else cout<<odd<<"\n";
}