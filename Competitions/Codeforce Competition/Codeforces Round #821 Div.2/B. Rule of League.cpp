#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int test; cin>>test;
	while(test--){
		int n , x , y;
		cin>> n >> x >> y;
		int win = max(y,x);
		if((x > 0 && y > 0) || (x == 0 && y == 0) || ((n-1) % win != 0)) cout<<"-1\n";
		else{
			int winner = 1;
			int count = 0;
			for(int i=2; i<=n; i++){
				++count;
				cout<<winner<<" ";
				if(count == win){
					count = 0;
					winner = i+1;
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}