#include <iostream>
using namespace std;

main(){
	long long n , k ;
	cin>> n >> k;
	char ch;
	long long a;
	long long distress = 0;
	for(int i=0; i<n; i++){
		cin>> ch >> a;
		if(ch == '-'){
			if(k >= a){
				k = k-a;
			}
			else distress++;
		}
		if(ch == '+') k += a;
	}
	cout<<k<<" "<<distress<<"\n";
}