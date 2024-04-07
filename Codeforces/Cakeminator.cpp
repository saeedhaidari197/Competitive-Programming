#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int r, c;
	cin>>r>>c;
	char a[r][c];
	
	bool ar[r][c];
	for(int x =0; x<r; x++){
		for(int i= 0; i < c; i++){
			cin>> a[x][i];
			if(a[x][i] == 'S') ar[x][i] = false;
			else ar[x][i] = true;
		}
	}
	for(int x =0; x<r; x++){
		for(int i= 0; i < c; i++){
			if(a[x][i]=='S'){
				for(int b=0; b<r; b++){
					for(int k=0; k<c; k++){	
						if(a[b][k] == 'S' && (b != x && k != i)){
							ar[x][k] = false;
							ar[b][i] = false;
						}
					}
				}	
			}
		}
	}
	int count = 0;
	for(int x =0; x<r; x++){
		for(int i=0; i<c; i++){
			
			if(ar[x][i] == true) count++;
		}
	}
	cout<<count;

	
}