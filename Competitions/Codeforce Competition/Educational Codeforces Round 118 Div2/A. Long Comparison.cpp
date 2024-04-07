
#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
	int t;
 
	scanf("%d", &t);
 
	while(t--)
	{
		double x1, p1, x2, p2, a, b;
 
		scanf("%lf %lf %lf %lf", &x1, &p1, &x2, &p2);
 
		a = log(x1) + p1*log(10);
		b = log(x2) + p2*log(10);
 
		if(abs(a-b) < 1e-9)
			printf("=\n");
		else if(a > b)
			printf(">\n");
		else
			printf("<\n");
 
		
	}
	
 
}
// HAKED
//#include<bits/stdc++.h>
//using namespace std;
// 
//main(){
//	int test; cin>>test;
//	while(test--){
//		int a1, p1; cin>> a1 >> p1;
//		int a2  , p2 ; cin>> a2 >> p2;
//		vector <int> arr1;
//		vector <int> arr2;
//		while(a1 > 0){
//			int num = a1%10;
//			a1 = a1/10;
//			arr1.insert(arr1.begin()+0,num);
//		}
//		while(a2 > 0){
//			int num = a2%10;
//			a2 = a2/10;
//			arr2.insert(arr2.begin()+0,num);
//		}
//		if(p1 > p2){
//			p1 = p1 - p2;
//			p2 = 0;
//		}
//		else if(p2 > p1){
//			p2 = p2 - p1;
//			p1 = 0;
//		}
//		else{
//			p1 = 0;
//			p2 = 0;
//		}
//		while(p1--)arr1.push_back(0);
//		while(p2--)arr2.push_back(0);
//		if(arr1.size() > arr2.size()) cout<<">\n";
//		else if(arr1.size() < arr2.size()) cout<<"<\n";
//		else{
//			int res = -1;
//			for(int i=0; i<arr1.size(); i++){
//				if(arr1[i] > arr2[i]){
//					res = 1;
//					break;
//				}
//				if(arr1[i] < arr2[i]){
//					res = 0;
//					break;
//				}
//			}
//			if(res == -1) cout<<"=\n";
//			else if(res == 1)cout<<">\n";
//			else cout<<"<\n";
//		}
//	}
//}