#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int k = 0;
	int op_vote = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		op_vote += num;
		if(num > k) k = num;
	}
	int my_vote = (k*n) - op_vote;
	if(my_vote <= op_vote){
		int dif = op_vote - my_vote + (1);
		k = k +( dif/n + (dif%n != 0));
	}
	cout<<k<<"\n";
}