#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int x = 0, y = 0;
	bool right;
	int count = 0;
	char s; cin>>s;
	if(s == 'U'){
		right = true;
		y++;
	}
	else{
		right = false;
		x++;
	}
	for(int i=0; i<n-1; i++){
		char s; cin>>s;
		if(s == 'U') y++;
		else x++;
		
		if(right){
			if(y > 0 && x > y){
				count++;
				right = false;
			}
		}
		else{
			if(x > 0 && y > x){
				count++;
				right = true;
			}
		}
	}
	cout<<count<<"\n";
}