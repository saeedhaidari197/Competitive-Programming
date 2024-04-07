#include <iostream>
using namespace std;

main(){
	int n; cin>>n;
	string s; cin>>s;
	int level = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		int prelevel = level;
		if(s[i] == 'U') level++;
		else level--;
		if(level == 0 && prelevel == -1) count++;
	}
	cout<<count<<"\n";
}