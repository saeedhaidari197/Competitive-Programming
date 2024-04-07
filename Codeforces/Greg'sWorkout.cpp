#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int chest=0 , biceps=0 ,back=0;
	for(int i=0; i<n; i++){
		chest += arr[i];
		i += 2;
	}
	for(int i=1; i<n; i++){
		biceps += arr[i];
		i += 2;
	}
	for(int i=2; i<n; i++){
		back += arr[i];
		i += 2;
	}
	if(chest >= biceps && chest>=back) cout<<"chest"<<"\n";
	else if(biceps >= chest && biceps >= back) cout<<"biceps"<<"\n";
	else cout<<"back"<<"\n";
}