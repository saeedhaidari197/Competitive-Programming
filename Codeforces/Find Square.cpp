#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int m; cin>>m;
	int count = 0;
	int row = -1 , col = -1;
	bool pos = false , found = false;
	for(int i=0; i<n; i++){
		if(!found){
			for(int j=0; j<m; j++){
			char c;
			cin>>c;
			if(c == 'B'){
				found = true;
				count++;
				if(!pos){
					row = i+1;
					col = j+1;
					pos = true;
				}
			}
			}	
		}
		else{
			for(int j=0; j<m; j++){
				char c; cin>>c;
			}
		}	
	}
	int res = count/2;
	cout<<row+res<<" "<<col+res<<"\n";
}