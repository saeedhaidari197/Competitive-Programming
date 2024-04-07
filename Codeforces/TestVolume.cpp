#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin>>n;
	string s , t; getline(cin,s); getline(cin,s);
	stringstream X(s);
	int max = 0;
	while((getline(X, t , ' '))){
		int count = 0;
		for(int i=0; i<t.size(); i++){
			if(isupper(t[i])) count++;
		}
		if(count > max ) max = count;
	}
	cout<<max<<"\n";
}