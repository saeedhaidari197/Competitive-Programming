#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		vector <int> arr;
		for(int i=0; i<n; i++){
			int num; cin>>num;
			arr.push_back(num);
		}
		int move = 0;
		for(int i=0; i<arr.size()-1; i++){
			int mn = min(arr[i], arr[i+1]);
			int mx = max(arr[i], arr[i+1]);
			if(mx > 2*mn){
				if(arr[i] > arr[i+1]){
					if(mx%2 == 1) arr.insert(arr.begin()+(i+1), mx/2+1);
					else arr.insert(arr.begin()+(i+1), mx/2);
					move++;
					i--;
				}
				else{
					if(mx%2 == 1) arr.insert(arr.begin()+(i+1), mx/2+1);
					else arr.insert(arr.begin()+(i+1), mx/2);
					move++;
					i--;
				}
			}
		}
		cout<<move<<"\n";
	}
}