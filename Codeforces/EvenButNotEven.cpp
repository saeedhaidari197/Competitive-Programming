#include <bits/stdc++.h>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		cin>>s;
		if(n < 2) cout<<"-1\n";
		else{
			int arr[2] = {0};
			bool odd1 = false;
			bool odd2 = false;
			for(int i=0; i<n; i++){
				int num = 0;
				num = num * 10 + (s[i] - 48);
				if(num %2 == 1 && arr[0] == 0){
					arr[0] = num;
				}
				else if(num % 2 == 1){
					arr[1] = num;
					break;
				}
			}
			if(arr[0] != 0 && arr[1] != 0) cout<<arr[0]<<arr[1]<<"\n";
			else cout<<"-1\n";
		} 
	}
}