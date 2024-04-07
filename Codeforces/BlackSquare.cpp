#include <iostream>
#include <string>
using namespace std;

main(){
	int arr[4];
	for(int i=0; i<4; i++){
		cin>>arr[i];
	}
	string s;
	cin>>s;
	int size = s.length();
	int ar[size] = {0};
	for(int i=0; i<size; i++){
		ar[i] = (ar[i]*10) + (s[i]-48);
	}
	int sum = 0;
	for(int i=0; i<size; i++){
		sum = sum + arr[ar[i]-1];
	}
	cout<<sum;
}