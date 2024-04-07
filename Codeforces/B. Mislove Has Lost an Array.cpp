#include<bits/stdc++.h>
using namespace std;

main(){
	int n , l ,r;
	cin>> n >> l >> r;
	int le = l , re = r;
	int count = 1;
	int sum = 0;
	while(le--){
		sum += count;
		count *= 2;
	}
	int min = sum + ((n - l) * 1);
	count = 1;
	sum = 0;
	while(re--){
		sum += count;
		count *= 2;
	}
	count = count/2;
	int max = sum + ((n-r) * count);
	
	cout<<min<<" "<<max<<"\n";
}