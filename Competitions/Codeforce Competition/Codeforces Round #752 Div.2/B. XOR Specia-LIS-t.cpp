#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin>>test;
	while(test--){
		int n,i;
		cin>>n;
		int a[n];
		bool b=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i>0) if(a[i]<=a[i-1]) b=1;
		}
		cout<<(n%2==0||b?"YES\n":"NO\n");
	}
}
