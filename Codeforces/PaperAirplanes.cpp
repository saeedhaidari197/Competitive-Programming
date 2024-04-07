#include<bits/stdc++.h>
using namespace std;

main(){
	long long k , n , s , p;
	cin >> k >> n >> s >>p;
	
	long long paper;
	if(n <= s) paper = 1;
	else{
		paper = n/s;
		if(n % s != 0) paper++;
	}
	paper = paper * k;
	long long pack;
	if(paper <= p) pack = 1;
	else{
		pack = paper / p;
		if(paper % p != 0) pack++;
	}
	
	cout<<pack<<"\n";
}