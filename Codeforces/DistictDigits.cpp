#include <iostream>
#include <bits/stdc++.h>
using namespace std;

main(){
	int num1, num2;
	cin>> num1 >> num2;
	int res = -1;
	for(int i=num1; i<=num2; i++){
		int digits = (int)log10(i);
		digits++;
		set<int> arr;
		int number = i;
		for(int j=0; j<digits; j++){
			int num = number%10;
			number = number/10;
			arr.insert(num);
		}
		if(arr.size() == digits){
			res = i;
			break;
		}
	}
	cout<<res<<"\n";
}