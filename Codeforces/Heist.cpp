#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int min = 1000000000;
	int max = 0;
	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		if(num > max) max = num;
		if(num < min) min = num;
	}
	min--;
	int res = max - min;
	res = res - n;
	cout<<res<<"\n";
}