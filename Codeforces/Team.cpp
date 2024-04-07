#include <iostream>
#include <vector>
using namespace std;

main(){
	int ques;
	int ans[3];
	int solve = 0;
	cin>>ques;
	while(ques--){
		cin>>ans[0]>>ans[1]>>ans[2];
		if(ans[0] + ans[1] + ans[2] >= 2) solve++;
	}
	cout<<solve;
}