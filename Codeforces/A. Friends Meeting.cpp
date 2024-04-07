#include<bits/stdc++.h>
using namespace std;

main(){
	int x1 , x2;
	cin>> x1 >> x2;
	int dif = abs(x1 - x2);
	int count = 1;
	long long tiredness = 0;
	while(dif > 0){
		if(dif > 1){
			dif = dif - 2;
			tiredness = tiredness + (2 * count);
		}
		else{
			tiredness = tiredness + count;
			break;
		}
		count++;
	} 
	cout<<tiredness<<"\n";
}