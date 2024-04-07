 #include <iostream>
 
 using namespace std;
 
 main(){
 	int n;
 	cin>>n;
 	int count = 0;
 	int arr[n][2];
 	for(int i=0; i<n; i++){
 		cin>>arr[i][0];
 		cin>>arr[i][1];
	 }
 	for(int i=0; i<n; i++){
 		for(int e=0; e<n; e++){
 			if(i == e) continue;
 			if(arr[i][1] == arr[e][0]) count++;
		 }
	 }
	 cout<<count;
 }