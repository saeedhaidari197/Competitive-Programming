#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		if(n == 1){
			int num; cin>>num;
			if(num%2 == 0) cout<<"1\n1\n";
			else cout<<-1<<"\n";
		}
		else{
			int arr[n];
			int res = -1;
			for(int i=0; i<n; i++){
				cin>>arr[i];
				if(arr[i] %2 == 0) res = i+1;
			}
			if(res >= 0) cout<<"1\n"<<res<<"\n";
			else{
				cout<<"2\n"<<n-1<<" "<<n<<"\n";
			}
		}
	}
}