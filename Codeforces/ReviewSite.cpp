#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int upvote = 0;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			if(num == 1 || num == 3) upvote++;
		}
		cout<<upvote<<"\n";
	}
}