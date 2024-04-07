#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int index = -1;
	bool found = false;
	for(int i=0; i<n; i++){
		char num; cin>>num;
		if(!found){
			if(num == '0'){
				index = i+1;
				found = true;
			}
		}
	}
	if(index == -1) cout<<n<<"\n";
	else cout<<index<<"\n";

	return 0;
}