#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
main(){
	fast;
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		int i =0 , j = n-1;
		int flag1 = 1 , flag2 = 1;
		int x = -1;
		while(i <= j){
			if(arr[i] == arr[j]){
				i++; j--;
			}
			else{
				if(x == -1){
					x = arr[j];
					j--;
				}
				else{
                    if(arr[i] == x ){
                        i++;
                    }
                    else if(arr[j] == x){
                        j--;
                    }
                    else{
                        flag1 = 0;
                        break;
                    }
				}
			}
		}
		i = 0;
		j = n-1;
		x = -1;
		while(i <= j){
			if(arr[i] == arr[j]){
				i++; j--;
			}
			else{
				if(x == -1){
					x = arr[i];
					i++;
				}
				else{
                    if(arr[i] == x ){
                        i++;
                    }
                    else if(arr[j] == x){
                        j--;
                    }
                    else{
                        flag2 = 0;
                        break;
                    }
				}
			}
		}
		if(flag1 + flag2 >= 1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}