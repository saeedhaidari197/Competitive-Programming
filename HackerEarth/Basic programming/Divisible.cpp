#include <bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	char res[n];
	int count = -1;
	for(int i=0; i<n/2; i++){
		string num; cin>>num;
		res[count++] = num[0];
	}
	for(int i=n/2; i<n; i++){
		string num; cin>>num;
		res[count++] = num[num.size()-1];
	}
	long long re = atol(res);
	if(re%11 == 0) cout<<"OUI"<<"\n";
	else cout<<"NON"<<"\n";
}