#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<char> arr(10);
	for(int i=0; i<10; i++) cin>>arr[i];
	if(arr[8] == 'A' && arr[0] == '1' && arr[1] == '2'){
		cout<<"00";
		for(int i=2; i<8; i++) cout<<arr[i];
	}
	else if(arr[8] == 'P'){
		if(arr[0] == '1' && arr[1] == '2') for(int i=0; i<8; i++) cout<<arr[i];
		else{
			int hour;
			if(arr[0] == '1' && arr[1] == '1'){
				hour = 23;
			}
			else if(arr[0] == '1' && arr[1] == '0'){
				hour = 22;
			}
			else{
				int hr = 0;
				hr = (hr*0) + (arr[1] - 48);
				hour = 12 + hr; 
			}
			cout<<hour;
			for(int i=2; i<8; i++) cout<<arr[i];
		}
	}
	else{
		for(int i=0; i<8; i++)cout<<arr[i];
	}
 	return 0;
}
