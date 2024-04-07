#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

main(){
	string alph = "abcdefghijklmnopqrstuvwxyz";                // My Logic Solution
	string s;
	cin>>s;
	int pos = 0;
	int size = s.size();
	int count = 0;
	int a = 0;
	int e;
	while(a < size){ 
		int l1 = 0; int l2 = 0;
		for(int i=pos; i<26; i++){
			if(alph[i] == s[a]){
				e = i;
				break;
			}
			if(i == 25) i = -1;
			l1++;
		}
		// count += min(abs(pos,i), 26-abs(pos-e));  min disntance from x till y on the circle of length 26 is = min(|x-y|, 26-|x-y|);    //RealFormula
		for(int i=pos; i>-1; i--){
			if(alph[i] == s[a]){
				pos = i;
				break; 
			}
			if(i == 0) i = 26;
			l2++;
		}
		if(l1 >= l2){
			count+=l2;
		} 
		else{
			count += l1;
		} 
		a++;
	}
	cout<<count;
}