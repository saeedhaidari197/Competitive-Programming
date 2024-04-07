 #include <iostream>
 using namespace std;
 
int getsum(int arr[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		res = res+arr[i];
	}
	return res;
}

 main(){
 	int test;
 	cin>>test;
 	while(test--){
 		int n,k;
 		cin>> n >>k;
 		int a[n], b[n];
 		int max = 0, min = 30;
 		for(int i=0; i<n; i++){
 			cin>>a[i];
 			if(min > a[i] ) min = a[i];
		}
		for(int i=0; i<n; i++){
 			cin>>b[i];
 			if(max < b[i]) max = b[i];
		}
 		if(k == 0  || (min > max)){
		 	cout<<getsum(a,n)<<"\n";
		 }
		 else{
		 	while(k--){
		 		int min=30 , max=0;
		 		int p,q;
		 		for(int i=0; i<n; i++){
		 			if(min > a[i]){
		 				min = a[i];
		 				p = i;
					 }
		 			if(max < b[i]){
		 				max = b[i];
		 				q = i;
					 }
				 }
				 if(min < max ){
				 	a[p] = max;
				 	b[q] = min;
				 }
				 else{
				 	break;
				 }
			 }
			 cout<<getsum(a,n)<<"\n";
		 }	
	 }
 }