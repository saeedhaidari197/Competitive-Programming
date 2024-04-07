#include <iostream>
#include <vector>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		vector <int> arr;
		for(int i=0; i<n; i++){
			int num;
			cin>>num;
			arr.push_back(num);
		}
		int size = arr.size();
		while(arr.size() > 1){
			cout<<arr.front()<<" ";
			arr.erase(arr.begin()+0);
			cout<<arr.back()<<" ";
			arr.pop_back();		
		}
		if(size%2 == 1) cout<<arr.back()<<"\n";
		else cout<<"\n";
	}
}