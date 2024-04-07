#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

main(){
	int n; cin>>n;
	vector <int> arr;
	for(int i=0; i<n; i++){
		int num;
		cin>> num;
		arr.push_back(num);
	}
	int s = 0;
	int d = 0;
	while(arr.size() > 0){
		if(arr.front() > arr.back()){
			s += arr.front();
			arr.erase(arr.begin()+0);
		}
		else{
			s += arr.back();
			arr.pop_back();
		}
		if(arr.size() > 0){
			if(arr.front() > arr.back()){
				d += arr.front();
				arr.erase(arr.begin()+0);
			}
			else{
				d += arr.back();
				arr.pop_back();
			}	
		}
		
	}
	
	cout<<s<<" "<<d<<"\n";
}