#include <iostream>
using namespace std;

main(){
	int n,m;
	cin>> n>>m;
	int size = n*m;
	bool isColor = false;
	for(int i=0; i<size; i++){
		char clr; cin>>clr;
		if(clr != 'W' && clr != 'B' && clr != 'G') isColor = true;
	}
	if(isColor) cout<<"#Color"<<"\n";
	else cout<<"#Black&White"<<"\n";
}