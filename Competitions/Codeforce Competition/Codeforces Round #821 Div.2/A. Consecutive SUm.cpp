#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		long long n, k;
		cin>> n >> k;
		long long arr[n+1];
		long long res = 0;
		for(int i=1; i<=n; i++) cin>>arr[i];
		for(int i=1; i<=(n-k+1); i++){
			//cout<<"loop one take: "<<i<<"\n";
			long long sum = 0;
			for(int j=i; j<=(i+k-1); j++){
//				cout<<"loop two take: "<<j<<"\n";
				int index;
				if(j%k == 0) index = k;
				else index = j%k;
				long long max = 0;
				for(int a=index; a<=n; a++){
//					cout<<"loop three take: "<<a<<"\n";
					if(max < arr[a]) max = arr[a];
					a = a + k - 1;
				}
				sum += max;
			}
			if(sum > res) res = sum;
		}
		
		cout<<res<<"\n";
	}
}