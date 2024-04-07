#include<bits/stdc++.h>
using namespace std;

main(){
	char arr[9];
	for(int i=0; i<9; i++) cin>>arr[i];
	int back = 8;
	bool possible = true;
	for(int i=0; i<4; i++){
		if(arr[i] != arr[back]){
			possible = false;
			break;
		}
		back--;
	}
	cout<<(possible ? "YES\n" : "NO\n");
}