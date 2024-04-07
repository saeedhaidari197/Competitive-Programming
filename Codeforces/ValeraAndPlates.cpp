#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , b , p;
	cin>> n >> b >> p;
	int ones = 0, twos = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		int num; cin>>num;
		if(num == 1) ones++;
		else twos++;
	}
	if(b > ones){
		p += (b-ones);
	}
	else{
		count += (ones-b);
	}
	if(p < twos) count += (twos - p);
	
	cout<<count<<"\n";
}