#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

main(){
	int test;
	cin>> test;
	while(test--){
//		string num; this works in IDE but not in website
//		cin>>num;
//		int size = num.length();
//		vector <int> nums;
//		for(int i=0; i<size; i++){
//			int number = 0;
//			number = (number * 10) + (num[i] - 48);
//			number = number* (pow(10,size-(i+1)));
//			if(number > 0 ){
//				nums.push_back(number);
//			}
//		}
//		
//		
//		size = nums.size();
//		cout<<size<<"\n";
//		for( int i=size-1; i>=0; i--){
//			cout<<nums.at(i)<<" ";
//		}
//		cout<<"\n";	
		int num;
		cin>>num;
			int digits = (int)log10(num);
			vector <int> ans;
			int res = num%10;
			if(res > 0) ans.push_back(res);
			num /= 10;
			for(int i=1; i<=digits; i++){
				int res = num%10;
				if(res == 0){
					num /= 10;
					continue;
				}
				else{
					res = res* pow(10,i);
					num /=10;
					ans.push_back(res);
				}
		 }
			cout<<ans.size()<<"\n";
			for(int i=0; i<ans.size(); i++){
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}
}