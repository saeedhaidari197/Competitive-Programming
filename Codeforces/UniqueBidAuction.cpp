#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void RemoveElements(int arr[], int n)
{
	vector <int> ar;
    unordered_map<int, int> mp;
 
    for (int i = 0; i < n; ++i) {
        mp[arr[i]]++;
    }
 
    for (int i = 0; i < n; ++i) {
        if (mp[arr[i]] <= 1) { // u can remove 1 to a variable which shows number of repetation if k=2 dont shows numbers which is repeated more than 2 times;
            ar.push_back(arr[i]);
        }
    }
    if(ar.size() == 0) cout<<-1<<"\n";
    else{
    	int min = 500000;
    	for(int i=0; i<ar.size(); i++){
    		if(ar[i] < min){
    			min = ar[i];
			} 
		}
		for(int i=0; i<n; i++){
			if(arr[i] == min){
				cout<<i+1<<"\n";
				break;
			}
		}
	    
	}
	    
}

main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		RemoveElements(arr, n);
	}
	
}
 