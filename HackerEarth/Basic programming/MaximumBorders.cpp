#include <iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int r,c;
		cin>> r >> c;
		char mat[r][c];
		int max = 0;
		for(int i=0; i<r; i++){
			int count = 0;
			for(int j=0; j<c; j++){
				cin>>mat[i][j];
				if(mat[i][j] == '#') count++;
			}
			if(count > max) max = count;
		}
		cout<<max<<"\n";
	}
}