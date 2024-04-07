#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

main(){
	int n; cin>>n;
	string a , b;
	cin>> a >> b;
	int count = 0;
	int num1 = 0 , num2 = 0;
	for(int i=0; i<n; i++){
		num1 = (num1 * 10) + (a[i] - 48);
		num2 = (num2 * 10) + (b[i] - 48);
		count += min(abs(num1 - num2), 10-abs(num1 - num2));
		num1 = 0;
		num2 = 0;
	}
	cout<<count;
}