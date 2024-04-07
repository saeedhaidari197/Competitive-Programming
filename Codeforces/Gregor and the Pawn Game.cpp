#include<bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n ; cin>>n;
		char r1[n] , r2[n];
		int count1 = 0 , count2 = 0;
		
		for(int i=0; i<n; i++){
			cin>>r1[i];
			if(r1[i] == '1') count1++;
		}
		for(int i=0; i<n; i++){
			cin>>r2[i];
			if(r2[i] == '1') count2++;
		}
		
		if (count1 == 0)  { cout << count2 <<"\n"; continue;}
		else if(count2 == 0) {cout << 0<<"\n" ; continue;}
		
		int ans = 0;
		if (r2[0] == '1') {
			if (r1[0] == '0') {
				r1[0] = '*';
				++ans;
			}
			else if (r1[1] == '1') {
				r1[1] = '*';
				++ans;
			}
		}

		if (r2[n - 1] == '1') {
			if (r1[n - 1] == '0') {
				r1[n - 1] = '*';
				++ans;
			}
			else if (r1[n - 2] == '1') {
				r1[n - 2] = '*';
				++ans;
			}
		}
		
		for(int i = 1; i < n - 1; i++) {
			if (r2[i] == '1') {
				if (r1[i - 1] == '1') {
					r1[i - 1] = '*';
					++ans;
				}
				else if (r1[i] == '0') {
					r1[i] = '*';
					++ans;
				}
				else if (r1[i + 1] == '1') {
					r1[i + 1] = '*';
					++ans;
				}
	
			}
		}
		cout << ans <<"\n";
	}
}