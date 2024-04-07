#include<bits/stdc++.h>
using namespace std;
//BITMASKING
int main(){
	int n, m, q;
	cin>>n >> m >> q;
	int given = 0;
	for(int i=0; i<m; i++){
		int num; cin>>num;
		if(given & (1 << num)) continue;
		else{
			given |= (1 << num);
		}
	}
	for(int i=0; i<q; i++){
		int num; cin>>num;
		if(given & (1 << num)){
			cout<<"Has given a Gift for the "<<num<<"th Friend!\n"; 
		}
		else{
			cout<<"Hasn't given any gift for "<<num<<"th Friend!\n";
		}
	}
	return 0;
}