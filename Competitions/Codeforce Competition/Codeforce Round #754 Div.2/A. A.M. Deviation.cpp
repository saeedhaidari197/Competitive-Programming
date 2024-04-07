#include<bits/stdc++.h>
using namespace std;

 main(){
 	int test; cin>>test;
 	while(test--){
 		int a1, a2, a3;
 		cin>>a1 >> a2 >> a3;
 		a2 = a2 *2;
 		int sum = a1+ a3;
 		if(sum == a2) cout<<"0\n";
 		else{
 			int dif = abs(sum - a2);
 			if(dif % 3 == 0) cout<<"0\n";
 			else cout<<"1\n";
		 }
	 }
 }