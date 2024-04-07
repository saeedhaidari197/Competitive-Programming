#include<iostream>
#include<algorithm>
using namespace std;
long long T,l,r,n,h,mid,sum,a[2300];
int main(){
	cin>>T;
	while(T--){
		cin>>n>>h;
		for(int i=1;i<=n;i++)cin>>a[i];
		l=1;
		r=h;
		while(l<r){
			mid=(l+r)/2;
			sum=0;
			for(int i=1;i<n;i++){
				if(a[i+1]-a[i]>mid)sum+=mid;
				else sum+=a[i+1]-a[i];
			}
			sum+=mid;
			if(sum<h)l=mid+1;
			else r=mid;	
		}
		cout<<l<<endl;
	}
}