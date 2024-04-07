#include<iostream>
#include <bits/stdc++.h>
using namespace std;

main(){
	int num;
	cin>>num;
	unsigned long long int fac = 1;
	for(int i=num; i>1; i++){
		fac *= i;
	}
	cout<<fac;
}

