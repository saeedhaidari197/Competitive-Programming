#include<bits/stdc++.h>
using namespace std;

main(){
	int arr[3];
	cin>>arr[0] >> arr[1] >> arr[2];
	sort(arr, arr+3);	
	cout<<max(0 , arr[2] - ( arr[0] + arr[1] - 1));
}