#include<bits/stdc++.h>
using namespace std;

main(){
	int b , k;
	cin>> b >> k;
	
	if(b%2 == 0){
		for(int i=0; i<k-1; i++){
			int num; cin>>num;
		}
		int num; cin>>num;
		if(num%2 == 0) cout<<"even\n";
		else cout<<"odd\n";
	}
	else{
		int odd = 0;
		for(int i=0; i<k; i++){
			int num; cin>>num;
			if(num%2 == 1) odd++;
		}
		if(odd%2 == 0) cout<<"even\n";
		else cout<<"odd\n";
	}
}