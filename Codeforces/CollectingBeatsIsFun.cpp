#include<bits/stdc++.h>
using namespace std;

int main(){
	int k; cin>>k;
	k = k*2;
	int arr[10] = {0};
	for(int i=0; i<16; i++){
		char n; cin>>n;
		if(n != '.'){
			int num = 0;
			num = num *10 + (n - 48);
			arr[num]++;
		}
	}
	bool possible = true;
	for(int i=1; i<10; i++){
		if(arr[i] > k){
			possible = false; 
			break;
		}
	}
	cout<<(possible ? "YES\n" : "NO\n");
	return 0;
}