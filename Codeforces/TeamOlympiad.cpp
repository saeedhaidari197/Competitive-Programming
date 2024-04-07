#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

main(){
	int size; 
	cin >> size;
	vector<int> v1,v2,v3;
	for(int i=0; i<size; i++){
		int num;
		cin>>num;
		if(num == 1) v1.push_back(i+1);
		if(num == 2) v2.push_back(i+1);
		if(num == 3) v3.push_back(i+1);
	}
	int mn = min(min(v1.size(),v2.size()),v3.size());
	cout<<mn<<"\n";
	for(int i=0; i<mn; i++){
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
	}
}