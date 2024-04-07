#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	char arr[n][5];
	int found = false;
	for(int i=0; i<n; i++){
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
			if(j>0){
				if(!found){
					if(arr[i][j] == 'O' && arr[i][j-1] == 'O'){
						arr[i][j] = '+';
						arr[i][j-1] = '+';
						found = true;
					}
				}	
			}			
		}
//		if(!found){                CODEFORCE SOLUTION ONLY CIN IN ABOVE LOOP
//			for(int i=0; i<2; i++){
//				if(arr[i][j*3] == 'O' && arr[i][j*3+1] == 'O'){
//					bus[i][j*3] = '+';
//					bus[i][j*3+1] = '+';
//					possible = true;
//				}
//			}
//		}	
	}
	if(found){
		cout<<"YES"<<"\n";
		for(int i=0; i<n; i++){
			for(int j=0; j<5; j++){
				cout<<arr[i][j];		
			}
			cout<<"\n";
		}
	}
	else cout<<"NO";
}