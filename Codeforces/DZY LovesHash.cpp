#include<bits/stdc++.h>
using namespace std;

main(){
	vector <int> arr;
	int p , n;
	cin>> p >> n;
	int count = 0, position = -1;
	bool found = false;
	while(n--){
		count++;
		int num; cin>>num;
		if(!found){
			int place = num % p;
			for(int i=0; i<arr.size(); i++){
				if(place == arr[i]){
					found = true;
					position = count;
				}
			}
			arr.push_back(place);
		}
			
	}
	cout<<position<<"\n";
}