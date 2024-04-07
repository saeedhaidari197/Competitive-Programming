#include<bits/stdc++.h>
using namespace std;


main(){
//	int arr[100];
//	arr[0] = 1;
//	int num = 1;
//	for(int i=1; i<100; i++){
//		arr[i] = num+2;
//		arr[i+1] = num+1;
//		i++;
//		num += 2;
//	}
//	int test; cin>>test;
//	while(test--){
//		int n, k;
//		cin>> n >> k;
//		if(k > (n - (n%2 == 0)) / 2) cout<<-1<<"\n";
//		else{
//			if(n%2 == 0){
//				for(int i=0; i<n-1; i++) cout<<arr[i]<<" ";
//				cout<<n<<"\n";
//			}
//			else{
//				for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//				cout<<"\n";
//			}
//		}
//	}

	int test; cin>>test;
	while(test--){
		int n , k; 
		cin>> n >> k;
		if(k > (n-1) / 2) { cout<<"-1\n"; continue;}
		cout<<"1 ";
		int max = n, min =2, count = 0;
		while(k--){
			cout<<max--<<" "<<min++<<" ";
			count += 2;
		}
		while(++count != n){
			cout<<min++<<" ";
		}
		cout<<"\n";
	}
}