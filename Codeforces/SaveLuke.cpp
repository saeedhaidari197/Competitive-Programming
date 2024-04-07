#include<bits/stdc++.h>
using namespace std;

int main()
{
	double d, l , v1 , v2;
	while(cin>>d>>l>>v1>>v2){
		double cnt = 0.0;
		double v = v1+v2;
		for(double i = 1;;i++){
			double dis = v*i;
			double flag = l - dis - d;
			if(flag <= d){
				cnt = i;
				cnt += flag / v;
				break;
			}
		}
		printf("%.20f\n", cnt);
	}
	return 0;
}