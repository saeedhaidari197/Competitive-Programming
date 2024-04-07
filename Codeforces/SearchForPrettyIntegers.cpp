#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , m;
	cin>> n >> m;
	int arr[n], ar[m];
	int mina = 10, minb = 10;
	bool found = false;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] < mina) mina = arr[i];
	}
	sort(arr,arr+n);
	for(int i=0; i<m; i++){
		cin>>ar[i];
		if(ar[i] < minb) minb = ar[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i] == ar[j]){
				found = true;
				cout<<arr[i]<<"\n";
				break;
			}
		}
		if(found) break;
	}
	if(!found){
		if(mina > minb) cout<<minb<<mina<<"\n";
		else if(minb > mina) cout<<mina<<minb<<"\n";	
	}
	
}