#include<bits/stdc++.h>
using namespace std;
long long int m=pow(10,9)+7;

long long int nextPowerOf2(long long int n)
{
    unsigned count = 0;
     
    // First n in the below condition
    // is for the case where n is 0
     
    while( n != 0)
    {
        n >>= 1;
        count += 1;
    }
    count--;
    
     
    return count;
}
long long int power (long long int a, long long int b) { 
    long long int ans=1ll; 
    while(b) { 
        if(b&1)ans=(ans*a)%m; 
        a=(a*a)%m; 
        b=b/2; 
    } 
    return ans; 
    } 
void solve()
{
        long long int n,k;
        cin>>n>>k;
        long long int ans=0;
        while(k>0){
            long long int two=nextPowerOf2(k);
            
            ans+=power(n,two);
            
            k=k-power(2,two);
            
        }
        cout<<ans%m<<endl;
}
//unsigned long long int power(long long n , long long i){
//	if(i == 0) return 1;
//	else{
//		unsigned long long int pow = 1;
//		while ( i > 0){
//			pow = pow * n;
//			i--;
//		}
//		return pow;
//	}
//}
main(){
	int test; cin>>test;
	while(test--){
		solve();
//		long long n , k;
//		cin>>n >> k;
//		vector <int> arr;
//		for(long long i=0; k>0; i++){
//			int num = k%2;
//			arr.push_back(num);
//			k = k/2;
//		}
//		unsigned long long int sum = 0;
//		unsigned long long int res = 0;
//		for(long long i=0; i<arr.size(); i++){
//			if(arr[i] > 0){
//				sum = power(n,i);
//				res += sum; 
//			}
//		}
//		cout<<res % 1000000007<<"\n";
	}
}