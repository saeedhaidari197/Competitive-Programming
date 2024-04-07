#include <iostream>
#include <string>
using namespace std;

main(){
	int n; cin>>n;
	string s;
	cin>>s;
	int j =1;
	for(int i=0; i<n; i++){
		cout<<s[i];
		i += j;
		j++;
	}
}