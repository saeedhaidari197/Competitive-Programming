#include <iostream>
#include <set>
using namespace std;
main(){
	long long s1, s2, s3 ,s4;
	cin>> s1 >> s2 >> s3>> s4;
	set<long long> s;
	s.insert(s1);
	s.insert(s2);
	s.insert(s3);
	s.insert(s4);
	int size = s.size();
	
	if(size == 1) cout<<3;
	else if(size == 2) cout<<2;
	else if(size == 3) cout<<1;
	else cout<<0;
}