#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int res = n;
	bool found = false;
	int count = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(!found){
			if(num == 0) res--;
			else found = true;
		}
		else{
			if(num == 1){
				if(count >= 2) res = res - count;
				count = 0;
			}
			else if(i == n-1){
				if(num == 0){
					count++;	
					res = res - count;
				} 
			}
			else count++;
		}
	}
	cout<<res<<"\n";
	
	return 0;
}