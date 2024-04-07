#include <iostream>
using namespace std;

main(){
//	int n; cin>>n; TooMuch Time and Size
//	int arr[n];
//	cin>>arr[0];
//	long long count = 1;
//	int max = 0;
//	for(int i=1; i<n; i++){
//		cin>>arr[i];
//		if(arr[i] > arr[i-1]){
//			count++;
//		}
//		else{
//			if(count > max){
//				max = count;
//			}
//			count = 1;
//		}
//	}
//	if(count > max) max = count;
//	cout<<max;

	int n; cin>>n;
	int num1, num2, max = 0;
	cin>>num1;
	int count = 1;
	for(int i=1; i<n; i++){
		cin>>num2;
		if(num2 > num1) count++;
		else{
			if(count > max){
				max = count;
			}
			count = 1;
		}
		num1 = num2;
	}
	if(count > max) cout<<count;
	else cout<<max;
}