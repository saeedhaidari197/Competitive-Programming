#include <iostream>
using namespace std;

main(){
	long long n , k;
	cin >> n >> k;
	long long dip = n / (2 * (k+1));
	long long cer = dip * k;
	cout<< dip << " " << cer << " " << n - dip - cer<<"\n";
}