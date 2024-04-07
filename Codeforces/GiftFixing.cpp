#include <iostream>
#include <cmath>
using namespace std;

main(){
	int test;
	cin >> test;
	while(test--){
		int size;
		cin>> size; 
		long long a[size];
		long long b[size];
		long long mina = 1000000000, minb = 1000000000;
		long long move = 0;
		for(int i=0; i<size; i++){
			cin>>a[i];
			if(mina > a[i]) mina = a[i];
		}
		for(int i=0; i<size; i++){
			cin>>b[i];
			if(minb > b[i]) minb = b[i];
		}
		for(int i=0; i<size; i++){
			if(a[i] > mina && b[i] > minb){
				long long x = a[i] - mina;
				long long y = b[i] - minb;
				move = move + max(x,y);
			}
			else if(a[i] > mina){
				long long x = a[i] - mina;
				move = move + x;
			}
			else if(b[i] > minb){
				long long y = b[i] - minb;
				move = move + y;
			}	
		}
		cout<<move<<"\n";
	}
}