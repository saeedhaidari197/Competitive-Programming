#include<bits/stdc++.h>
using namespace std;

int main(){
	int p1 = 1, p2 = 2, spec = 3;
	int n; cin>>n;
	bool possible = true;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(possible){
			if(num == spec){
				possible = false;
				continue;
			}
			p1 = num;
			p2 = spec;
			for(int j=1; j<=3; j++){
				if(j!=p1 && j!=p2){
					spec = j;
					break;
				}
			}
		}
	}
	cout<<(possible ? "YES\n" : "NO\n");
	return 0;
}