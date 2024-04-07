#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int ones = 0 , twos = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(num == 1) ones++;
		else twos++;
	}
	int count = min(twos,ones);
	ones = ones - min(ones,twos);
	if(ones > 2){
		count = count + (ones/3);
	}
	cout<<count<<"\n";
}