#include<bits/stdc++.h>
using namespace std;

main(){
	int num = 1;
	int res[1001];
	for(int i=1; i<=1000; i++){
		while(num%3 == 0 || num%10 == 3) num++;
		res[i] = num;
		num++;
	}
	int test; cin>>test;
	while(test--){
		int num; cin>>num;
		cout<<res[num]<<"\n";
	}
}