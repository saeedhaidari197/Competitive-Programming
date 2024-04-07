#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int a , b , c;
		cin>> a >> b >> c;
		if(a == 1) cout<<1<<"\n";
		else{
			int fsec = a - 1;
			int ssec;
			if(c == 1) ssec = abs( b - c);
			else ssec = abs(b - c ) + abs(c - 1);
			
			if(fsec == ssec) cout<<"3\n";
			else if(fsec < ssec) cout<<"1\n";
			else cout<<"2\n";
		}
	} 
}