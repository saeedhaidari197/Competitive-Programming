#include<bits/stdc++.h>
using namespace std;

bool isTriangular(int num){
	int sum = 0;
	for(int i=1; sum<=num; i++){
		sum += i;
		if(sum == num) return true;
	}
	return false;
}
main(){
	int n; cin>>n;
	if(isTriangular(n)) cout<<"YES\n";
	else cout<<"NO\n";
}