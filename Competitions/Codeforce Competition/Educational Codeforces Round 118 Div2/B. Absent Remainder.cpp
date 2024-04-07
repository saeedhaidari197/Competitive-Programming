#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<(n/2);i++){
			cout<<a[i+1]<<" "<<a[0]<<"\n";
		}
	}
}