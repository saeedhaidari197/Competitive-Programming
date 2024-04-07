#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	int min = 1000000;
	for(int i=0; i<n; i++){
		int total = 0;
		for(int j=0; j<arr[i]; j++){
			int num; cin>>num;
			total += (num*5);
		}
		total += (15*arr[i]);
		if(total < min) min = total;
	}
	cout<<min<<"\n";
	return 0;
}