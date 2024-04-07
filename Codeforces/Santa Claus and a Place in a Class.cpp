#include<bits/stdc++.h>
using namespace std;

main(){
	int col , row, x;
	cin>> col >> row >> x;
	row = row*2;
	char s;
	if(x%2==0) s = 'R';
	else{
		s = 'L';
		x++;
	}
	int y , z;
	if(x <= row){
		y = 1;
		z = x/2;
	}
	else{
		if(x%row == 0){
			y = x/row;
			z = row/2;
		}
		else{
			y = (x/row) + 1;
			z = (x%row) / 2;
		}
	}
	cout<<y<<" "<<z<<" "<<s<<"\n";
}