#include<bits/stdc++.h>
using namespace std;

main(){
	long long a , b;
	long long count = 1;
	string s;
	cin >> a >> b;
	while(true){
		if(count % 2 == 1){
			if(count > a){
				s = "Vladik";
				break;
			}
			a = a - count;
		}
		else{
			if(count > b){
				s = "Valera";
				break;
			}
			b = b - count;
		}
		count++;
	}
	cout<<s<<"\n";
}