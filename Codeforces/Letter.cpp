#include <iostream>
using namespace std;

main(){
	int n , m;
	cin>>n >> m;
	char arr[n][m];
	int rowstrt = -1;
	int colstrt = m;
	int rowend = -1;
	int colend = -1;
	for(int i=0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin>>arr[i][j];
			if(arr[i][j] == '*'){
				if(rowstrt < 0) rowstrt = i;
				if(colstrt > j) colstrt = j;
				if(colend < j) colend = j;
				rowend = i;
			}
		}
	}
	for(int i=rowstrt; i<=rowend; i++){
		for(int j=colstrt; j<=colend; j++){
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
}