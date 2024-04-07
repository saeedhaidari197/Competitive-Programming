#include<iostream>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		string a , b;
		string res = "";
		int index = 0;
		cin>>a; cin>>b;
		while(true){
			int cmp = a.compare(b);
			if(cmp == -1){
				res[index] = a[0];
				index++;
				a.erase(a.begin() + 0);
				if(a.size() == 0) break;
			}
			else{
				res[index] = b[0];
				index++;
				b.erase(b.begin() + 0);
				if(b.size() == 0) break;
			}
		}
		int asize = a.size();
		for(int i=0; i<asize; i++){
			res[index] = a[i];
			index++;
		}
		int bsize = b.size();
		for(int i=0; i<bsize; i++){
			res[index] = b[i];
			index++;
		}
		for(int i=0; i<index; i++) cout<<res[i];
		cout<<"\n";
	}
}