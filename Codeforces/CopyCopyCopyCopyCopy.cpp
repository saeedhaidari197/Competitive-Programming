#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

main(){
	int test;cin>>test;
	while(test--){
//		int n;      // Takes 265ms and 3500kb
//		cin>>n;
//		int ar[n];
//		for(int i=0; i<n; i++){
//			cin>>ar[i];
//		}
//		set<int> arr(ar, ar+n);
//		cout<<arr.size()<<"\n";
		int n;     //Take 249ms and 400kb size
		cin>>n;
		int arr[n];
		int count = 0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr, arr + n);
	   for (int i = 0; i < n; i++){
	      while (i < n - 1 && arr[i] == arr[i + 1]){
	         i++;
	      }
	      count++;
	   }
	   cout<<count<<"\n";
	}
}