//#include <bits/stdc++.h>
//using namespace std;
//
//main(){
//	int n, c; cin>> n >> c;    // My solution
//	if(n > c) cout<<n-c<<"\n";
//	else{
//		int res = 0;
//		while(c > 8 && n < c/2){
//			if(c%2 == 0){
//				res++;
//				c = c/2;
//				if(c%2 == 1){
//					res++;
//					c++;
//				}
//			}
//			else{
//				res++;
//				c++;
//			}
//		}
//		while(n != c){
//			if(c%2 == 0){
//				if(n*2 > c){
//					n--;
//					res++;
//				}
//				else{
//					res++;
//					n = n*2;
//				}
//			}
//			else{
//				if(n*2 > c+1){
//					n--;
//					res++;
//				}
//				else{
//					res++;
//					n = n*2;
//				}
//			}
//		}
//		cout<<res<<"\n";
//	}
//}
#include <bits/stdc++.h>
using namespace std;

main(){               //Qaderi Solution More Efficient
    int n , c; cin>> n >> c;
    int count;
    if(n > c) cout<<n-c<<"\n";
    else{
        count = 0;
        while(n < c){
            if(c%2 == 1){
                c++;
                count++;
            }
            else{
                c = c/2;
                count++;
            }
        }
        cout<<(n-c) + count<<"\n";
    }
}