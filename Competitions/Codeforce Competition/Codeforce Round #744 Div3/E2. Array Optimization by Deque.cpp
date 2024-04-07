//#include<bits/stdc++.h>
//using namespace std;
//
//main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int test; cin>>test;
//	while(test--){
//		int n; cin>>n;
//		vector <long long> res;
//		long long num; cin>>num;
//		long long min = num, max = num;
//		res.push_back(num);
//		int count = 0;
//		for(int i=1; i<n; i++){
//			cin>>num;
//			if(num <= min){
//				res.insert(res.begin()+0, num);
//				min = num;
//			}
//			else if(num >= max){
//				res.push_back(num);
//				max = num;
//			}
//			else{
//				int bigcount = 0, lowcount = 0;
//				int size = res.size();
//				for(int i=0; i<size; i++){
//					if(res[i] < num) lowcount++;
//					else if(res[i] > num) bigcount++;
//				}
//				if(lowcount >= bigcount){
//					res.push_back(num);
//					count += bigcount;
//				}
//				else{
//					res.insert(res.begin()+0, num);
//					count += lowcount;
//				}
//				
//				
//			}
//		}
//		cout<<count<<"\n";
//	}
//}                     //Aboce solution is mine working but time complexity is high

#include <bits/stdc++.h>
using namespace std;
 
long long n,bit[200005];
 
void update(long long x){
    while(x<=n){
        bit[x]++;
        x=x+(x&(-x));
    }
}
 
long long query(long long x){
    long c=0;
    while(x>0){
        c=c+bit[x];
        x=x-(x&(-x));
    }
    return c;
}
 
int main() {
	long long T=1;
	cin>>T;
	while(T--){
	    long long k,i,j,d,ans=0;
	    cin>>n;
	    long long a[n+1],b[n+1];
	    for(i=1;i<=n;i++) cin>>a[i],b[i]=a[i],bit[i]=0;
	    sort(b+1,b+n+1);
	    unordered_map<long long,long long> mp,mp1;
	    for(i=1;i<=n;i++) mp[b[i]]=i;
	    for(i=1;i<=n;i++){
	        k=query(mp[a[i]]-1);
	        d=i-1-k-mp1[a[i]];
	        mp1[a[i]]++;
	        ans+=min(d,k);
	        update(mp[a[i]]);
	    }
	    cout<<ans<<endl;
	} 
	return 0;
}