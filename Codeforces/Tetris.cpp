#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , m; 
	cin>> n >> m;
	int arr[n] = {0};
	for(int i=0; i<m; i++){
		int num; cin>>num;
		arr[num-1]++;
	}
	cout<<*min_element(arr,arr+n)<<"\n";
	
	return 0;
}