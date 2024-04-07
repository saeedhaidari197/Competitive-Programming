#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	int arr[3] = {5,7,5};
	bool possible = true;
	for(int i=0; i<3; i++){
		getline(cin,s);
		if(possible){
			int count = 0;
			for(int j=0; j<s.size(); j++){
				if(s[j]=='a' || s[j]=='i' || s[j]=='o'|| s[j]=='u' || s[j]=='e') count++;
			}
			if(count != arr[i]) possible = false;
		}
	}
	cout<<(possible ? "YES" : "NO")<<"\n";
}