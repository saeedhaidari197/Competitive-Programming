#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	char s[n]; for(int i=0; i<n; i++) cin>>s[i];
	int max = 0;
	char ans[2];
	for(int i=0; i<n-1; i++){
		int count = 1;
		for(int j=i+1; j<n-1; j++){
			if(s[i] == s[j] && s[i+1] == s[j+1]) count++;
		}
		if(count > max){
			max = count;
			ans[0] = s[i];
			ans[1] = s[i+1];
		}
	}
	cout<<ans[0]<<ans[1]<<"\n";
}